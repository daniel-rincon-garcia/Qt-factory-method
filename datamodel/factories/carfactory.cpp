#include "carfactory.h"
#include "datamodel/models/car.h"
#include <QString>

CarFactory::CarFactory()
{

}

Vehicle* CarFactory::factoryMethod()
{
    return new Car(QString("CAR_%1").arg(rand()).toStdString());

}
