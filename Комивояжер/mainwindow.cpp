#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<cmath>

int mas[9][9], array[9][9], //Массивы, содержащие таблицу, первый нужен для вычислений пути, второй для отрисовки линий черным цветом
   count,con = 3, inc, level=0, //Количество вершин, con - вспомогательная переменная(крашфикс), inc - инкремент - переменная для рисования, level - текущий этап
   row_min[9], column_min[9], //Массивы минимальных элементов в каждой строке и в каждом столбце
   min_way[9][2], mid_arg, mid_func, //Массив, содержащий минимальные элементы среди строки и столбца и переменные для отрисовки окружности
   way[9], //Наикратчайщий путь
   fill = 3,blacklin[100], //fill - переменная для определения режима заполнения таблицы, blacklin - массив, содержащий двусторонние дороги
   d = 1,lim = 12,lim2 = 12,ab = 1; //d - переменная, хранящая номер вершины, которую нужно удалить, lim,lim2 - вершины,которые удалены, ab - количество удаленных вершин
double grad = 360; //Градусы для отрисовки окружности

class Coord //Координаты для построения ребер графа и для окружностей
{
public:
    int x,y;
};

Coord *coord;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->build->hide(); //Кнопки, которые изначально нужно спрятать
    ui->calc->hide();
    ui->del->hide();
    ui->clear->hide();
    ui->fill->hide();
    ui->radioButton->hide();
    ui->radioButton_2->hide();
    ui->radioButton_3->hide();
    ui->spinBox->hide();
    ui->graphicsView->hide();
    ui->create->setStyleSheet("background-color: rgb(64,64,64);");
    ui->build->setStyleSheet("background-color: rgb(64,64,64);");
    ui->calc->setStyleSheet("background-color: rgb(64,64,64);");
    ui->clear->setStyleSheet("background-color: rgb(64,64,64);");
    ui->fill->setStyleSheet("background-color: rgb(64,64,64);");
    ui->del->setStyleSheet("background-color: rgb(64,64,64);");
    ui->label_2->hide();
    HideTable();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_create_clicked() //Кнопка, отвечающая за создание таблицы [count*count] и за создание count количества - вершин графа
{
    ui->calc->hide();
    ui->label_2->hide();
  count = con;
  ui->build->show();
  HideTable(); //Скрываем таблицу 9*9
  ShowTable(); //Показываем таблицу count*count
  coord = new Coord[count];
  mid_arg = 800;
  mid_func = 350;
  level = 1;
  ui->clear->show();
  ui->fill->show();
  ui->radioButton->show();
  ui->radioButton_2->show();
  ui->radioButton_3->show();
  this->repaint();
}


void MainWindow::on_build_clicked() //Кнопка построения путей между вершинами и разблокировка кнопки "вычислить"
{
    ui->del->show();
    ui->spinBox->show();
    ui->label_2->hide();
  count = con;
  QString linA,linB; //Вспомогательные переменные для передачи значений в массив
  for(int i = 0; i < count; i++) {
      for(int j = 0; j < count; j++) {
          if(i != j) {
              linA = "road" + QString::number(i+1) + QString::number(j+1); //Из таблицы передаем значения в массивы
              linB = this->findChild<QLineEdit*>(linA)->text();
              array[i][j] = linB.toInt(); //Преобразуем из string в int
              if(!linB.length())
                  linB = QString::number(INT32_MAX);
              mas[i][j] = linB.toInt();
          }
          if(i == j) {
              mas[i][j] = -1;
              array[i][j] = -1;
          }
          if(i == lim-1 || j == lim-1 || i == lim2-1 || j == lim2-1) mas[i][j] = -1; //Если хотя бы одна вершина удалена, условие выполняется
      }
  }
  ui->calc->show();
  level = 2;
  this->repaint();
}

void MainWindow::on_calc_clicked() //Кнопка "Вычислить" - определяет оптимальный путь, а так же на графе белыми линиями показывает его и выводит ответ
{
  QString msg1,msg2; //Переменные для вывода ответа
  QString linA,linB; //Вспомогательные переменные для передачи значений в массив

  for(int i = 0; i < count; i++) {
      find_min(); //Функция поиска минимального элемента для оптимального пути
      find_null(i); //Функция поиска элементов для оптимального пути
  }

  for(int i = 0; i < count; i++) {
      for(int j = 0; j < count; j++) {
          if(i != j) {
              linA="road" + QString::number(i+1) + QString::number(j+1); //Из таблицы передаем значения в массивы
              linB = this->findChild<QLineEdit*>(linA)->text();
              if(!linB.length())
                  linB=QString::number(INT32_MAX);
              mas[i][j] = linB.toInt(); //Преобразуем из string в int
          }
          else
              mas[i][j] = -1;
      }
  }
  msg2 += "\nОптимальный путь: " + QString::number(min_way[0][0]+1) + " -> " + QString::number(min_way[0][1]+1);
  int point = min_way[0][1], summ = mas[min_way[0][0]][min_way[0][1]];

  way[0] = min_way[0][0];
  way[1] = min_way[0][1];

  int z = 1;
  while(z < count) { //Получаем наикратчайший путь
      for(int i = 1; i < count; i++) {
          if(min_way[i][0] == point && min_way[i][0] != min_way[i][1]) {
              way[z+1] = point = min_way[i][1];
              msg2 += " -> " + QString::number(min_way[i][1]+1);
              summ += mas[min_way[i][0]][min_way[i][1]];
              min_way[i][0] = -1;
              min_way[i][1] = -1;
              break;
          }
      }
      z++;
  }
  level = 3;
  this->repaint();
  msg1 += "\nПродолжительность: " + QString::number(summ);
  ui->label_2->show();
  ui->label_2->setText("Ответ: " + msg1 + msg2); //Выводим ответ
}

void MainWindow::find_min() { //Функция поиска минимального элемента для оптимального пути
    for(int i=0; i < count; i++) {
        row_min[i] = INT32_MAX;
        column_min[i] = INT32_MAX;
    }
    for(int i=0; i<count; i++) {
        for(int j=0; j<count; j++)
            if(i != j && mas[i][j]>-1 && mas[i][j] < row_min[i])
                row_min[i] = mas[i][j];
        for(int j=0; j<count; j++)
            if(i != j && row_min[i] > 0 && row_min[i] < 1000)
                mas[i][j]  -= row_min[i];
    }
    for(int j=0; j< count; j++) {
        for(int i=0; i< count; i++)
            if(i != j && mas[i][j] > -1 && mas[i][j] < column_min[j])
                column_min[j] = mas[i][j];
        for(int i=0; i<count; i++)
            if(i != j && column_min[j] > 0 && column_min[j] < 1000)
                mas[i][j] -= column_min[j];
    }
}

void MainWindow::find_null(int num) { //Функция поиска элементов для оптимального пути
    int min_in_row = INT32_MAX;
    int min_in_column = INT32_MAX;
    int max_rank_null = 0;
    int max_i = 100, max_j = 100;

    for(int i=0; i<count; i++) {
        for(int j=0; j<count; j++) {
            if(mas[i][j] == 0 && i!=j) {
                for(int k=0; k<count; k++) {
                    if(mas[k][j] > -1 && mas[k][j] < min_in_column && k!=j && k!=i)
                        min_in_column = mas[k][j];
                    if(mas[i][k] > -1 && mas[i][k] < min_in_row && i!=k && k!=j)
                        min_in_row = mas[i][k];
                }
                if(min_in_row > 1000)
                    min_in_row = 0;
                if(min_in_column > 1000)
                    min_in_column = 0;
                if(min_in_row > -1 && min_in_column > -1 && i!=j && max_rank_null <= (min_in_row + min_in_column)) {
                    max_rank_null = min_in_row + min_in_column;
                    max_i = i;
                    max_j = j;
                }
            }
        }
    }
    min_way[num][0] = max_i;
    min_way[num][1] = max_j;

    for(int z=0; z<count; z++) {
        mas[max_i][z] = -1;
        mas[z][max_j] = -1;
    }
    mas[max_j][max_i] = -1;
};


void MainWindow::HideTable() //Скрывание таблицы 9*9
{
    QString str;
    for(int i = 1; i < 10; i++) {
        str="column" + QString::number(i); //Столбцы
        this->findChild<QWidget*>(str)->hide();

        str="row" + QString::number(i); //Строки
        this->findChild<QWidget*>(str)->hide();

        str="minus" + QString::number(i); //Перегородка
        this->findChild<QWidget*>(str)->hide();

        for(int j = i+1; j < 10; j++) { //Дороги справа от перегородки
            str="road" + QString::number(i) + QString::number(j);
            this->findChild<QWidget*>(str)->hide();
        }
        for(int j = 1; j < i; j++) { //Дороги слева от перегородки
            str="road" + QString::number(i) + QString::number(j);
            this->findChild<QWidget*>(str)->hide();
        }
    }
}

void MainWindow::ShowTable() { //Показываем таблицу count*count
  QString str;
  for(int i = 1; i < count+1; i++) {
      str="column" + QString::number(i);
      this->findChild<QWidget*>(str)->show();
      //Задаем параметры для border-bottom и border-top для того, чтобы убрать белую рамку вокруг ячеек таблицы
       this->findChild<QLineEdit*>(str)->setStyleSheet("border-bottom: 1px solid rgb(40,40,40); border-top: 1px solid rgb(40,40,40); background-color: rgb(40,40,40)");
  }
  for(int i = 1; i < count+1; i++) {
      str="row" + QString::number(i);
      this->findChild<QWidget*>(str)->show();
      this->findChild<QLineEdit*>(str)->setStyleSheet("border-bottom: 1px solid rgb(40,40,40); border-top: 1px solid rgb(40,40,40); background-color: rgb(40,40,40)");
      str="minus" + QString::number(i);
      this->findChild<QWidget*>(str)->show();
       this->findChild<QLineEdit*>(str)->setStyleSheet("border-bottom: 1px solid rgb(40,40,40); border-top: 1px solid rgb(40,40,40); background-color: rgb(40,40,40)");
      for(int j=i+1; j < count+1; j++) {
          str="road" + QString::number(i) + QString::number(j);
          this->findChild<QWidget*>(str)->show();
            this->findChild<QLineEdit*>(str)->setStyleSheet("border-bottom: 1px solid rgb(100,100,100); border-top: 1px solid rgb(100,100,100); background-color: rgb(100,100,100)");
      }
      for(int j = 1; j < i; j++) {
          str="road" + QString::number(i) + QString::number(j);
          this->findChild<QWidget*>(str)->show();
          this->findChild<QLineEdit*>(str)->setStyleSheet("border-bottom: 1px solid rgb(100,100,100); border-top: 1px solid rgb(100,100,100); background-color: rgb(100,100,100)");
      }
  }
}

void MainWindow::paintEvent(QPaintEvent *) { //Функция отрисовки графа полностью
    if(level) {
        int otstup;
        grad /= count;
        inc = grad;
        grad = 0;
        QPainter paint(this);
        QPen pen;
        QBrush brush;
        QString str;
        QFont font;

        paint.begin(this);
        paint.setPen(pen);
        paint.setFont(font);
        paint.setBrush(brush);

        pen.setColor(Qt::black);
        pen.setWidth(7);
        pen.setStyle(Qt::SolidLine);
        font.setPointSize(20);

        brush.setStyle(Qt::Dense3Pattern);
        brush.setColor(Qt::white);

        for(int i=0; i<count; i++) {

            otstup = -10;
            if(grad>180) otstup = 130;
            str=QString::number(i+1);
            coord[i].x = mid_arg+(200*cos(grad/57));
            coord[i].y = mid_func+(200*-sin(grad/57));
            paint.setPen(QPen(Qt::black,3,Qt::SolidLine,Qt::FlatCap));
            paint.setBrush(QBrush(Qt::darkGreen, Qt::SolidPattern));
            paint.setFont(QFont("Arial",12));
            grad += inc;
            if(i != lim-1 && i!= lim2-1) { //Если вершина была удалена, то её не рисуем
            paint.drawEllipse(coord[i].x,coord[i].y,100,100); //Рисуем вершины
            paint.setPen(QPen(Qt::green,2,Qt::SolidLine,Qt::FlatCap));
            paint.drawText(coord[i].x+48,coord[i].y+otstup,str); //Нумерация вершин
        }
        }
        if(level > 1) { //Если была нажата кнопка "построить" или "вычислить"
            int t = 0;
            pen.setStyle(Qt::DashLine);
             pen.setColor(Qt::darkGray);
            pen.setWidth(3);
            paint.setPen(pen);
            for(int i = 0; i < count; i++) {
                for(int j=0; j< count; j++) {
                    if((mas[i][j]<1000 && mas[i][j] > 0) && (i != lim-1 && j != lim-1 && i!= lim2-1 && j!= lim2-1)) {
                        paint.drawLine(coord[i].x+50,coord[i].y+50,coord[j].x+50,coord[j].y+50); //Рисуем односторонние дороги
                    }
                }
            }
            pen.setColor(Qt::black);
            pen.setStyle(Qt::SolidLine);
             pen.setWidth(4);
             paint.setPen(pen);
            for(int i = 0; i < count; i++) {
                for(int j = i+1; j < count; j++) {
                    if(array[i][j] > 0) {
                        blacklin[t] = j * 10 + i;
                        t++;
                    }
                }
            }
             for(int i = 0; i < count; i++) {
                 for(int j = 0; j < i; j++) {
                     for(int g = 0; g < t; g++) {
                         if((i*10+j) == blacklin[g] && array[i][j] > 0 && i!=lim-1 && j!=lim-1 && i!=lim2-1 && j!=lim2-1) {
                             paint.drawLine(coord[i].x+50,coord[i].y+50,coord[j].x+50,coord[j].y+50); //Рисуем двусторонние дороги
                         }
                     }
                 }
             }
        }

        if(level == 3) { //Если была нажата кнопка "вычислить"
            int reg = 0; //Корректировка по количеству удаленных вершин
            if(lim < 10) reg++;
            if(lim2 < 10) reg++;
            pen.setStyle(Qt::SolidLine);
            pen.setWidth(5);
            pen.setColor(Qt::white);
            paint.setPen(pen);
            for(int i=1; i<count+1-reg; i++) //Рисуем оптимальный путь в соответствии с количеством удаленных вершин
                paint.drawLine(coord[way[i-1]].x+50,coord[way[i-1]].y+50,coord[way[i]].x+50,coord[way[i]].y+50);
        }
        paint.end();
    }
}

void MainWindow::on_Spinbox_valueChanged(int arg1) //Отвечает за количество вершин и размер таблицы
{
   con = arg1;
     ui->spinBox->setMaximum(arg1);
}


void MainWindow::on_create_pressed()
{
    ui->create->setStyleSheet("color: rgb(205,205,255); font-size: 24px; border: 2px solid rgb(205,205,255);");
}

void MainWindow::on_create_released()
{
    ui->create->setStyleSheet("background-color: rgb(64,64,64); color: rgb(50,205,50);");
}

void MainWindow::on_build_pressed()
{
    ui->build->setStyleSheet("color: rgb(205,205,255); font-size: 24px; border: 2px solid rgb(205,205,255);");
}

void MainWindow::on_build_released()
{
    ui->build->setStyleSheet("background-color: rgb(64,64,64); color: rgb(50,205,50);");
}

void MainWindow::on_calc_pressed()
{
    ui->calc->setStyleSheet("color: rgb(205,205,255); font-size: 24px; border: 2px solid rgb(205,205,255);");
}

void MainWindow::on_calc_released()
{
    ui->calc->setStyleSheet("background-color: rgb(64,64,64); color: rgb(50,205,50);");
}

void MainWindow::on_clear_pressed()
{
    ui->clear->setStyleSheet("color: rgb(205,205,255); font-size: 24px; border: 2px solid rgb(205,205,255);");
}

void MainWindow::on_clear_released()
{
     ui->clear->setStyleSheet("background-color: rgb(64,64,64); color: rgb(50,205,50);");
}

void MainWindow::on_fill_pressed()
{
    ui->fill->setStyleSheet("color: rgb(205,205,255); font-size: 24px; border: 2px solid rgb(205,205,255);");
}

void MainWindow::on_fill_released()
{
     ui->fill->setStyleSheet("background-color: rgb(64,64,64); color: rgb(50,205,50);");
}

void MainWindow::on_del_pressed()
{
    ui->del->setStyleSheet("color: rgb(205,205,255); font-size: 24px; border: 2px solid rgb(205,205,255);");
}

void MainWindow::on_del_released()
{
     ui->del->setStyleSheet("background-color: rgb(64,64,64); color: rgb(50,205,50);");
}

void MainWindow::on_clear_clicked()
{ //Кнопка "Очистить" - полностью чистит таблицу,восстанавливает в ней все цвета, убирает кнопку "удалить" и удаляет все дороги у графа, оставляя только вершины
    QString str;
    for(int i = 1; i < 10; i++) {
    for(int j = i+1; j < 10; j++) {
        str="road" + QString::number(i) + QString::number(j);
        this->findChild<QLineEdit*>(str)->setText("");
         this->findChild<QLineEdit*>(str)->setStyleSheet("border-bottom: 1px solid rgb(100,100,100); border-top: 1px solid rgb(100,100,100); background-color: rgb(100,100,100)");
    }
    for(int j = 1; j < i; j++) {
        str="road" + QString::number(i) + QString::number(j);
        this->findChild<QLineEdit*>(str)->setText("");
        this->findChild<QLineEdit*>(str)->setStyleSheet("border-bottom: 1px solid rgb(100,100,100); border-top: 1px solid rgb(100,100,100); background-color: rgb(100,100,100)");
    }
}
    ui->label_2->hide();
    lim = 12; //Вершин теперь удалено 0
    lim2 = 12;
    ab = 1;
    ui->del->hide();
    ui->spinBox->hide();
    ui->create->click(); //Удаляем все вершины графа искусственным нажанием на кнопку "Создать"
}


void MainWindow::on_fill_clicked() //Кнопка заполнения таблицы случайными числами в диапазоне, зависящем от выбранного режима
{
    QString str;
    int ran,f = 1;
if(fill == 3) f = 9; //от 1 до 9
if(fill == 2) f = 99; //от 1 до 99
if(fill == 1) f = 999; //от 1 до 999
    for(int i = 1; i < count+1; i++) {
    for(int j = i+1; j < count+1; j++) {
        ran = rand()% f + 1;
        str="road" + QString::number(i) + QString::number(j);
        this->findChild<QLineEdit*>(str)->setText(QString::number(ran));
    }
    for(int j = 1; j < i; j++) {
        ran = rand()% f + 1;
        str="road" + QString::number(i) + QString::number(j);
        this->findChild<QLineEdit*>(str)->setText(QString::number(ran));
    }
}
}


void MainWindow::on_radioButton_clicked() //от 1 до 9
{
fill = 1;
}


void MainWindow::on_radioButton_2_clicked() //от 1 до 99
{
fill = 2;
}


void MainWindow::on_radioButton_3_clicked() //от 1 до 999
{
fill = 3;
}


void MainWindow::on_del_clicked() //Кнопка удаления вершины - можно удалить максимум 2 вершины на одном графе
{
    if(ab == 2) lim2 = lim; //Если удаляем уже вторую вершины
    QString str;
    lim = d;
    for(int i = 1; i < count+1; i++) {
    for(int j = i+1; j < count+1; j++) {
        if(i == lim || j == lim) {
        str="road" + QString::number(i) + QString::number(j);
        this->findChild<QLineEdit*>(str)->setText("");
        this->findChild<QLineEdit*>(str)->setStyleSheet("border-bottom: 1px solid rgb(100,0,0); border-top: 1px solid rgb(100,0,0); background-color: rgb(100,0,0);");
    }   //Перекрашиваем ячейки таблицы с удаленными элементами в красный цвет для наглядности и удаляем из них элементы
    }
    for(int j = 1; j < i; j++) {
        if(i == lim || j == lim) {
        str="road" + QString::number(i) + QString::number(j);
        this->findChild<QLineEdit*>(str)->setText("");
        this->findChild<QLineEdit*>(str)->setStyleSheet("border-bottom: 1px solid rgb(100,0,0); border-top: 1px solid rgb(100,0,0); background-color: rgb(100,0,0);");
    }
    }
}
    this->repaint();
    ui->build->click(); //Искусственно нажимаем кнопку "Построить" для того, чтобы после удаления вершины граф сразу перестроился
    ab++;
}


void MainWindow::on_spinBox_valueChanged(int arg1) //Вершина, которую нужно удалить
{
    d = arg1;
}
