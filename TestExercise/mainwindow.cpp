
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <stdlib.h>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->transfer_from_1,SIGNAL(clicked()), this, SLOT(from1()));
    connect(ui->transfer_from_2,SIGNAL(clicked()), this, SLOT(from2()));
    connect(ui->take_2_balls,SIGNAL(clicked()), this, SLOT(from12()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::from1()
{
    QString new_label;
    double balls_in_basket_1, balls_in_basket_2, blue_balls_1, blue_balls_2, red_balls_1, red_balls_2;
    bool probability = rand() % 2 == 0;
    double blue_probability_1, blue_probability_2, red_probability_1, red_probability_2, br_probability, r2_probability, b2_probability;

    balls_in_basket_1 = (ui->balls_in_basket_1->text().toDouble());
    balls_in_basket_2 = (ui->balls_in_basket_2->text().toDouble());
    blue_balls_1 = (ui->blue_balls_1->text().toDouble());
    blue_balls_2 = (ui->blue_balls_2->text().toDouble());
    red_balls_1 = (ui->red_balls_1->text().toDouble());
    red_balls_2 = (ui->red_balls_2->text().toDouble());
    blue_probability_1 = (ui->blue_probability_1->text().toDouble());
    blue_probability_2 = (ui->blue_probability_2->text().toDouble());
    red_probability_1 = (ui->red_probability_1->text().toDouble());
    red_probability_2 = (ui->red_probability_2->text().toDouble());

    if(balls_in_basket_1!=0){

        if (red_balls_1 == 0 && probability == 1 && blue_balls_1!= 0){
            blue_balls_1--;
            blue_balls_2++;
            balls_in_basket_1--;
            balls_in_basket_2++;


            ui->blue_balls_1->setText(QString::number(blue_balls_1));
            new_label = QString::number(blue_balls_2);
            ui->blue_balls_2->setText(new_label);

            blue_probability_1 = (blue_balls_1 / balls_in_basket_1)*100;
            new_label = QString::number(blue_probability_1);
            ui->blue_probability_1->setText(new_label);
            blue_probability_2 = (blue_balls_2 / balls_in_basket_2)*100;
            new_label = QString::number(blue_probability_2);
            ui->blue_probability_2->setText(new_label);
            red_probability_1 = (red_balls_1 / balls_in_basket_1) *100;
            new_label = QString::number(red_probability_1);
            ui->red_probability_1->setText(new_label);
            red_probability_2 = (red_balls_2 / balls_in_basket_2) *100;
            new_label = QString::number(red_probability_2);
            ui->red_probability_2->setText(new_label);

            ui->last_action_1->setText("- с");
            ui->last_action_2->setText("+ с");

        }

        if (blue_balls_1 == 0 && probability == 0 && red_balls_1!= 0){
            red_balls_1--;
            red_balls_2++;
            balls_in_basket_1--;
            balls_in_basket_2++;

            new_label = QString::number(red_balls_1);
            ui->red_balls_1->setText(new_label);
            new_label = QString::number(red_balls_2);
            ui->red_balls_2->setText(new_label);

            blue_probability_1 = (blue_balls_1 / balls_in_basket_1)*100;
            new_label = QString::number(blue_probability_1);
            ui->blue_probability_1->setText(new_label);
            blue_probability_2 = (blue_balls_2 / balls_in_basket_2)*100;
            new_label = QString::number(blue_probability_2);
            ui->blue_probability_2->setText(new_label);
            red_probability_1 = (red_balls_1 / balls_in_basket_1) *100;
            new_label = QString::number(red_probability_1);
            ui->red_probability_1->setText(new_label);
            red_probability_2 = (red_balls_2 / balls_in_basket_2) *100;
            new_label = QString::number(red_probability_2);
            ui->red_probability_2->setText(new_label);

            ui->last_action_1->setText("- к");
            ui->last_action_2->setText("+ к");

        }

        if (blue_balls_1 != 0 && (probability == 0)){
            blue_balls_1--;
            blue_balls_2++;
            balls_in_basket_1--;
            balls_in_basket_2++;

            new_label = QString::number(blue_balls_1);
            ui->blue_balls_1->setText(new_label);
            new_label = QString::number(blue_balls_2);
            ui->blue_balls_2->setText(new_label);

            blue_probability_1 = (blue_balls_1 / balls_in_basket_1)*100;
            new_label = QString::number(blue_probability_1);
            ui->blue_probability_1->setText(new_label);
            blue_probability_2 = (blue_balls_2 / balls_in_basket_2)*100;
            new_label = QString::number(blue_probability_2);
            ui->blue_probability_2->setText(new_label);
            red_probability_1 = (red_balls_1 / balls_in_basket_1) *100;
            new_label = QString::number(red_probability_1);
            ui->red_probability_1->setText(new_label);
            red_probability_2 = (red_balls_2 / balls_in_basket_2) *100;
            new_label = QString::number(red_probability_2);
            ui->red_probability_2->setText(new_label);

            ui->last_action_1->setText("- с");
            ui->last_action_2->setText("+ с");

        }


        if (red_balls_1 != 0 && (probability == 1)){
            red_balls_1--;
            red_balls_2++;
            balls_in_basket_1--;
            balls_in_basket_2++;

            new_label = QString::number(red_balls_1);
            ui->red_balls_1->setText(new_label);
            new_label = QString::number(red_balls_2);
            ui->red_balls_2->setText(new_label);

            blue_probability_1 = (blue_balls_1 / balls_in_basket_1)*100;
            new_label = QString::number(blue_probability_1);
            ui->blue_probability_1->setText(new_label);
            blue_probability_2 = (blue_balls_2 / balls_in_basket_2)*100;
            new_label = QString::number(blue_probability_2);
            ui->blue_probability_2->setText(new_label);
            red_probability_1 = (red_balls_1 / balls_in_basket_1) *100;
            new_label = QString::number(red_probability_1);
            ui->red_probability_1->setText(new_label);
            red_probability_2 = (red_balls_2 / balls_in_basket_2) *100;
            new_label = QString::number(red_probability_2);
            ui->red_probability_2->setText(new_label);

            ui->last_action_1->setText("- к");
            ui->last_action_2->setText("+ к");

        }




    new_label = QString::number(balls_in_basket_1);
    ui->balls_in_basket_1->setText(new_label);

    new_label = QString::number(balls_in_basket_2);
    ui->balls_in_basket_2->setText(new_label);

}
}

void MainWindow::from2()
{
QString new_label;
double balls_in_basket_1, balls_in_basket_2, blue_balls_1, blue_balls_2, red_balls_1, red_balls_2;
bool probability = rand() % 2 == 0;
double blue_probability_2, blue_probability_1, red_probability_1, red_probability_2, br_probability, r2_probability, b2_probability;

balls_in_basket_1 = (ui->balls_in_basket_1->text().toDouble());
balls_in_basket_2 = (ui->balls_in_basket_2->text().toDouble());
blue_balls_1 = (ui->blue_balls_1->text().toDouble());
blue_balls_2 = (ui->blue_balls_2->text().toDouble());
red_balls_1 = (ui->red_balls_1->text().toDouble());
red_balls_2 = (ui->red_balls_2->text().toDouble());
blue_probability_1 = (ui->blue_probability_1->text().toDouble());
blue_probability_2 = (ui->blue_probability_2->text().toDouble());
red_probability_1 = (ui->red_probability_1->text().toDouble());
red_probability_2 = (ui->red_probability_2->text().toDouble());


if(balls_in_basket_2!=0){

    if (red_balls_2 == 0 && probability == 1 && blue_balls_2!= 0){
            blue_balls_2--;
            blue_balls_1++;
            balls_in_basket_2--;
            balls_in_basket_1++;

            new_label = QString::number(blue_balls_1);
            ui->blue_balls_1->setText(new_label);
            new_label = QString::number(blue_balls_2);
            ui->blue_balls_2->setText(new_label);

            blue_probability_1 = (blue_balls_1 / balls_in_basket_1)*100;
            new_label = QString::number(blue_probability_1);
            ui->blue_probability_1->setText(new_label);
            blue_probability_2 = (blue_balls_2 / balls_in_basket_2)*100;
            new_label = QString::number(blue_probability_2);
            ui->blue_probability_2->setText(new_label);
            red_probability_1 = (red_balls_1 / balls_in_basket_1) *100;
            new_label = QString::number(red_probability_1);
            ui->red_probability_1->setText(new_label);
            red_probability_2 = (red_balls_2 / balls_in_basket_2) *100;
            new_label = QString::number(red_probability_2);
            ui->red_probability_2->setText(new_label);

            ui->last_action_2->setText("- с");
            ui->last_action_1->setText("+ с");


    }

    if (blue_balls_2 == 0 && probability == 0 && red_balls_2!= 0){
            red_balls_2--;
            red_balls_1++;
            balls_in_basket_2--;
            balls_in_basket_1++;

            new_label = QString::number(red_balls_1);
            ui->red_balls_1->setText(new_label);
            new_label = QString::number(red_balls_2);
            ui->red_balls_2->setText(new_label);

            blue_probability_1 = (blue_balls_1 / balls_in_basket_1)*100;
            new_label = QString::number(blue_probability_1);
            ui->blue_probability_1->setText(new_label);
            blue_probability_2 = (blue_balls_2 / balls_in_basket_2)*100;
            new_label = QString::number(blue_probability_2);
            ui->blue_probability_2->setText(new_label);
            red_probability_1 = (red_balls_1 / balls_in_basket_1) *100;
            new_label = QString::number(red_probability_1);
            ui->red_probability_1->setText(new_label);
            red_probability_2 = (red_balls_2 / balls_in_basket_2) *100;
            new_label = QString::number(red_probability_2);
            ui->red_probability_2->setText(new_label);

            ui->last_action_2->setText("- к");
            ui->last_action_1->setText("+ к");


    }

    if (blue_balls_2 != 0 && (probability == 0)){
            blue_balls_2--;
            blue_balls_1++;
            balls_in_basket_2--;
            balls_in_basket_1++;

            new_label = QString::number(blue_balls_1);
            ui->blue_balls_1->setText(new_label);
            new_label = QString::number(blue_balls_2);
            ui->blue_balls_2->setText(new_label);

            blue_probability_1 = (blue_balls_1 / balls_in_basket_1)*100;
            new_label = QString::number(blue_probability_1);
            ui->blue_probability_1->setText(new_label);
            blue_probability_2 = (blue_balls_2 / balls_in_basket_2)*100;
            new_label = QString::number(blue_probability_2);
            ui->blue_probability_2->setText(new_label);
            red_probability_1 = (red_balls_1 / balls_in_basket_1) *100;
            new_label = QString::number(red_probability_1);
            ui->red_probability_1->setText(new_label);
            red_probability_2 = (red_balls_2 / balls_in_basket_2) *100;
            new_label = QString::number(red_probability_2);
            ui->red_probability_2->setText(new_label);

            ui->last_action_2->setText("- с");
            ui->last_action_1->setText("+ с");


    }


    if (red_balls_2 != 0 && (probability == 1)){
            red_balls_2--;
            red_balls_1++;
            balls_in_basket_2--;
            balls_in_basket_1++;

            new_label = QString::number(red_balls_1);
            ui->red_balls_1->setText(new_label);
            new_label = QString::number(red_balls_2);
            ui->red_balls_2->setText(new_label);

            blue_probability_1 = (blue_balls_1 / balls_in_basket_1)*100;
            new_label = QString::number(blue_probability_1);
            ui->blue_probability_1->setText(new_label);
            blue_probability_2 = (blue_balls_2 / balls_in_basket_2)*100;
            new_label = QString::number(blue_probability_2);
            ui->blue_probability_2->setText(new_label);
            red_probability_1 = (red_balls_1 / balls_in_basket_1) *100;
            new_label = QString::number(red_probability_1);
            ui->red_probability_1->setText(new_label);
            red_probability_2 = (red_balls_2 / balls_in_basket_2) *100;
            new_label = QString::number(red_probability_2);
            ui->red_probability_2->setText(new_label);

            ui->last_action_2->setText("- к");
            ui->last_action_1->setText("+ к");

    }




    new_label = QString::number(balls_in_basket_1);
    ui->balls_in_basket_1->setText(new_label);

    new_label = QString::number(balls_in_basket_2);
    ui->balls_in_basket_2->setText(new_label);

}
}

void MainWindow::from12(){

QString new_label;
double balls_in_basket_1, balls_in_basket_2, blue_balls_1, blue_balls_2, red_balls_1, red_balls_2;
double blue_probability_2, blue_probability_1, red_probability_1, red_probability_2, br_probability, r2_probability, b2_probability;
int three_choices=1 + rand() % 3, basket_probability=1 + rand() % 3, probability = 1 + rand() % 4 ;


balls_in_basket_1 = (ui->balls_in_basket_1->text().toDouble());
balls_in_basket_2 = (ui->balls_in_basket_2->text().toDouble());
blue_balls_1 = (ui->blue_balls_1->text().toDouble());
blue_balls_2 = (ui->blue_balls_2->text().toDouble());
red_balls_1 = (ui->red_balls_1->text().toDouble());
red_balls_2 = (ui->red_balls_2->text().toDouble());
blue_probability_1 = (ui->blue_probability_1->text().toDouble());
blue_probability_2 = (ui->blue_probability_2->text().toDouble());
red_probability_1 = (ui->red_probability_1->text().toDouble());
red_probability_2 = (ui->red_probability_2->text().toDouble());

    switch(basket_probability)
case(1):{
    if ((blue_balls_1>1 && three_choices == 1)||(balls_in_basket_1>=2 && red_balls_1==0 && three_choices == 2 ) || (probability >2 && balls_in_basket_2 ==0 && blue_balls_1 >1)){
            balls_in_basket_1-=2;
            blue_balls_1-=2;

            new_label = QString::number(blue_balls_1);
            ui->blue_balls_1->setText(new_label);
            new_label = QString::number(balls_in_basket_1);
            ui->balls_in_basket_1->setText(new_label);

            blue_probability_1 = (blue_balls_1 / balls_in_basket_1)*100;
            new_label = QString::number(blue_probability_1);
            ui->blue_probability_1->setText(new_label);
            blue_probability_2 = (blue_balls_2 / balls_in_basket_2)*100;
            new_label = QString::number(blue_probability_2);
            ui->blue_probability_2->setText(new_label);
            red_probability_1 = (red_balls_1 / balls_in_basket_1) *100;
            new_label = QString::number(red_probability_1);
            ui->red_probability_1->setText(new_label);
            red_probability_2 = (red_balls_2 / balls_in_basket_2) *100;
            new_label = QString::number(red_probability_2);
            ui->red_probability_2->setText(new_label);
    }
    else if ((red_balls_1>1 && three_choices ==2)||(balls_in_basket_1>=2 && blue_balls_1==0 && three_choices == 1 )|| (probability <3 && balls_in_basket_2 ==0 && red_balls_1 >1)){
            balls_in_basket_1-=2;
            red_balls_1-=2;

            new_label = QString::number(red_balls_1);
            ui->red_balls_1->setText(new_label);
            new_label = QString::number(balls_in_basket_1);
            ui->balls_in_basket_1->setText(new_label);

            blue_probability_1 = (blue_balls_1 / balls_in_basket_1)*100;
            new_label = QString::number(blue_probability_1);
            ui->blue_probability_1->setText(new_label);
            blue_probability_2 = (blue_balls_2 / balls_in_basket_2)*100;
            new_label = QString::number(blue_probability_2);
            ui->blue_probability_2->setText(new_label);
            red_probability_1 = (red_balls_1 / balls_in_basket_1) *100;
            new_label = QString::number(red_probability_1);
            ui->red_probability_1->setText(new_label);
            red_probability_2 = (red_balls_2 / balls_in_basket_2) *100;
            new_label = QString::number(red_probability_2);
            ui->red_probability_2->setText(new_label);
    }
    else  if (red_balls_1>=1 && blue_balls_1>=1 && three_choices ==3){
            balls_in_basket_1-=2;
            blue_balls_1--;
            red_balls_1--;

            new_label = QString::number(blue_balls_1);
            ui->blue_balls_1->setText(new_label);
            new_label = QString::number(red_balls_1);
            ui->red_balls_1->setText(new_label);
            new_label = QString::number(balls_in_basket_1);
            ui->balls_in_basket_1->setText(new_label);

            blue_probability_1 = (blue_balls_1 / balls_in_basket_1)*100;
            new_label = QString::number(blue_probability_1);
            ui->blue_probability_1->setText(new_label);
            blue_probability_2 = (blue_balls_2 / balls_in_basket_2)*100;
            new_label = QString::number(blue_probability_2);
            ui->blue_probability_2->setText(new_label);
            red_probability_1 = (red_balls_1 / balls_in_basket_1) *100;
            new_label = QString::number(red_probability_1);
            ui->red_probability_1->setText(new_label);
            red_probability_2 = (red_balls_2 / balls_in_basket_2) *100;
            new_label = QString::number(red_probability_2);
            ui->red_probability_2->setText(new_label);
    }

    break;

        case(2):{
    if ((blue_balls_2>1 && three_choices == 1)||(balls_in_basket_2>=2 && red_balls_2==0 && three_choices == 2 )|| (probability >2 && balls_in_basket_1 ==0 && blue_balls_2>1)){
            balls_in_basket_2-=2;
            blue_balls_2-=2;

            new_label = QString::number(blue_balls_2);
            ui->blue_balls_2->setText(new_label);
            new_label = QString::number(balls_in_basket_2);
            ui->balls_in_basket_2->setText(new_label);

            blue_probability_1 = (blue_balls_1 / balls_in_basket_1)*100;
            new_label = QString::number(blue_probability_1);
            ui->blue_probability_1->setText(new_label);
            blue_probability_2 = (blue_balls_2 / balls_in_basket_2)*100;
            new_label = QString::number(blue_probability_2);
            ui->blue_probability_2->setText(new_label);
            red_probability_1 = (red_balls_1 / balls_in_basket_1) *100;
            new_label = QString::number(red_probability_1);
            ui->red_probability_1->setText(new_label);
            red_probability_2 = (red_balls_2 / balls_in_basket_2) *100;
            new_label = QString::number(red_probability_2);
            ui->red_probability_2->setText(new_label);
        }
    else if ((red_balls_2>1 && three_choices ==2)||(balls_in_basket_2>=2 && blue_balls_2==0 && three_choices == 1 )|| (probability < 3 && balls_in_basket_1 ==0 && red_balls_2>1)){
            balls_in_basket_2-=2;
            red_balls_2-=2;

            new_label = QString::number(red_balls_2);
            ui->red_balls_2->setText(new_label);
            new_label = QString::number(balls_in_basket_2);
            ui->balls_in_basket_2->setText(new_label);

            blue_probability_1 = (blue_balls_1 / balls_in_basket_1)*100;
            new_label = QString::number(blue_probability_1);
            ui->blue_probability_1->setText(new_label);
            blue_probability_2 = (blue_balls_2 / balls_in_basket_2)*100;
            new_label = QString::number(blue_probability_2);
            ui->blue_probability_2->setText(new_label);
            red_probability_1 = (red_balls_1 / balls_in_basket_1) *100;
            new_label = QString::number(red_probability_1);
            ui->red_probability_1->setText(new_label);
            red_probability_2 = (red_balls_2 / balls_in_basket_2) *100;
            new_label = QString::number(red_probability_2);
            ui->red_probability_2->setText(new_label);
        }
        else if (red_balls_2>=1 && blue_balls_2>=1 && three_choices ==3){
            balls_in_basket_2-=2;
            blue_balls_2--;
            red_balls_2--;

            new_label = QString::number(blue_balls_2);
            ui->blue_balls_2->setText(new_label);
            new_label = QString::number(red_balls_2);
            ui->red_balls_2->setText(new_label);
            new_label = QString::number(balls_in_basket_2);
            ui->balls_in_basket_2->setText(new_label);

            blue_probability_1 = (blue_balls_1 / balls_in_basket_1)*100;
            new_label = QString::number(blue_probability_1);
            ui->blue_probability_1->setText(new_label);
            blue_probability_2 = (blue_balls_2 / balls_in_basket_2)*100;
            new_label = QString::number(blue_probability_2);
            ui->blue_probability_2->setText(new_label);
            red_probability_1 = (red_balls_1 / balls_in_basket_1) *100;
            new_label = QString::number(red_probability_1);
            ui->red_probability_1->setText(new_label);
            red_probability_2 = (red_balls_2 / balls_in_basket_2) *100;
            new_label = QString::number(red_probability_2);
            ui->red_probability_2->setText(new_label);
        }
        }break;
                case (3):{ if((balls_in_basket_1+balls_in_basket_2)< 2) break;
        if ((blue_balls_1 && blue_balls_2)!= 0 && probability == 1){
                    blue_balls_1--;
                    blue_balls_2--;
                    balls_in_basket_1--;
                    balls_in_basket_2--;

                    new_label = QString::number(blue_balls_1);
                    ui->blue_balls_1->setText(new_label);
                    new_label = QString::number(blue_balls_2);
                    ui->blue_balls_2->setText(new_label);
                    new_label = QString::number(balls_in_basket_1);
                    ui->balls_in_basket_1->setText(new_label);
                    new_label = QString::number(balls_in_basket_2);
                    ui->balls_in_basket_2->setText(new_label);

                    blue_probability_1 = (blue_balls_1 / balls_in_basket_1)*100;
                    new_label = QString::number(blue_probability_1);
                    ui->blue_probability_1->setText(new_label);
                    blue_probability_2 = (blue_balls_2 / balls_in_basket_2)*100;
                    new_label = QString::number(blue_probability_2);
                    ui->blue_probability_2->setText(new_label);
                    red_probability_1 = (red_balls_1 / balls_in_basket_1) *100;
                    new_label = QString::number(red_probability_1);
                    ui->red_probability_1->setText(new_label);
                    red_probability_2 = (red_balls_2 / balls_in_basket_2) *100;
                    new_label = QString::number(red_probability_2);
                    ui->red_probability_2->setText(new_label);

                }
                else if ((red_balls_1 && red_balls_2)!= 0 && probability == 2 ){
                    red_balls_1--;
                    red_balls_2--;
                    balls_in_basket_1--;
                    balls_in_basket_2--;

                    new_label = QString::number(red_balls_1);
                    ui->red_balls_1->setText(new_label);
                    new_label = QString::number(red_balls_2);
                    ui->red_balls_2->setText(new_label);
                    new_label = QString::number(balls_in_basket_1);
                    ui->balls_in_basket_1->setText(new_label);
                    new_label = QString::number(balls_in_basket_2);
                    ui->balls_in_basket_2->setText(new_label);

                    blue_probability_1 = (blue_balls_1 / balls_in_basket_1)*100;
                    new_label = QString::number(blue_probability_1);
                    ui->blue_probability_1->setText(new_label);
                    blue_probability_2 = (blue_balls_2 / balls_in_basket_2)*100;
                    new_label = QString::number(blue_probability_2);
                    ui->blue_probability_2->setText(new_label);
                    red_probability_1 = (red_balls_1 / balls_in_basket_1) *100;
                    new_label = QString::number(red_probability_1);
                    ui->red_probability_1->setText(new_label);
                    red_probability_2 = (red_balls_2 / balls_in_basket_2) *100;
                    new_label = QString::number(red_probability_2);
                    ui->red_probability_2->setText(new_label);
                }

                else if ((blue_balls_1 && red_balls_2)!= 0 && probability == 3 ){
                    blue_balls_1--;
                    red_balls_2--;
                    balls_in_basket_1--;
                    balls_in_basket_2--;

                    new_label = QString::number(blue_balls_1);
                    ui->blue_balls_1->setText(new_label);
                    new_label = QString::number(red_balls_2);
                    ui->red_balls_2->setText(new_label);
                    new_label = QString::number(balls_in_basket_1);
                    ui->balls_in_basket_1->setText(new_label);
                    new_label = QString::number(balls_in_basket_2);
                    ui->balls_in_basket_2->setText(new_label);

                    blue_probability_1 = (blue_balls_1 / balls_in_basket_1)*100;
                    new_label = QString::number(blue_probability_1);
                    ui->blue_probability_1->setText(new_label);
                    blue_probability_2 = (blue_balls_2 / balls_in_basket_2)*100;
                    new_label = QString::number(blue_probability_2);
                    ui->blue_probability_2->setText(new_label);
                    red_probability_1 = (red_balls_1 / balls_in_basket_1) *100;
                    new_label = QString::number(red_probability_1);
                    ui->red_probability_1->setText(new_label);
                    red_probability_2 = (red_balls_2 / balls_in_basket_2) *100;
                    new_label = QString::number(red_probability_2);
                    ui->red_probability_2->setText(new_label);
                }

                else if ((blue_balls_2 && red_balls_1)!= 0 && probability == 4 ){
                    blue_balls_2--;
                    red_balls_1--;
                    balls_in_basket_1--;
                    balls_in_basket_2--;

                    new_label = QString::number(blue_balls_2);
                    ui->blue_balls_2->setText(new_label);
                    new_label = QString::number(red_balls_1);
                    ui->red_balls_1->setText(new_label);
                    new_label = QString::number(balls_in_basket_1);
                    ui->balls_in_basket_1->setText(new_label);
                    new_label = QString::number(balls_in_basket_2);
                    ui->balls_in_basket_2->setText(new_label);

                    blue_probability_1 = (blue_balls_1 / balls_in_basket_1)*100;
                    new_label = QString::number(blue_probability_1);
                    ui->blue_probability_1->setText(new_label);
                    blue_probability_2 = (blue_balls_2 / balls_in_basket_2)*100;
                    new_label = QString::number(blue_probability_2);
                    ui->blue_probability_2->setText(new_label);
                    red_probability_1 = (red_balls_1 / balls_in_basket_1) *100;
                    new_label = QString::number(red_probability_1);
                    ui->red_probability_1->setText(new_label);
                    red_probability_2 = (red_balls_2 / balls_in_basket_2) *100;
                    new_label = QString::number(red_probability_2);
                    ui->red_probability_2->setText(new_label);
                }

                } break;

}


}
