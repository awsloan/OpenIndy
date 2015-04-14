#ifndef PLANE_H
#define PLANE_H

#include <QObject>
#include <QtXml>

#include "geometry.h"
#include "position.h"
#include "direction.h"

/*!
 * \brief The Plane class
 */
class Plane : public Geometry
{
    Q_OBJECT

public:
    Plane(const bool &isNominal, QObject *parent = 0);
    Plane(const bool &isNominal, const Position &xyz, const Direction &normal, QObject *parent = 0);
    Plane(const bool &isNominal, const Direction &normal, const double &d, QObject *parent = 0);

    Plane(const Plane &copy, QObject *parent = 0);

    Plane &operator=(const Plane &copy);

    ~Plane();

    //########################################
    //order of unknown parameters (Qxx-matrix)
    //########################################

    enum PlaneUnknowns{
        unknownPositionX = eUnknownX,
        unknownPositionY = eUnknownY,
        unknownPositionZ = eUnknownZ,
        unknownNormalI = eUnknownPrimaryI,
        unknownNormalJ = eUnknownPrimaryJ,
        unknownNormalK = eUnknownPrimaryK
    };

    //###################################################################
    //check wether this geometry has a direction, a position and a radius
    //###################################################################

    bool hasDirection() const;
    bool hasPosition() const;

    //###########################
    //get or set plane parameters
    //###########################

    const Direction &getDirection() const;
    const Position &getPosition() const;

    const double &getDistanceFromOrigin() const;

    void setPlane(const Position &xyz, const Direction &normal);
    void setPlane(const Direction &normal, const double &d);

    //###########################
    //reexecute the function list
    //###########################

    void recalc();

    //#################
    //save and load XML
    //#################

    QDomElement toOpenIndyXML(QDomDocument &xmlDoc) const;
    bool fromOpenIndyXML(QDomElement &xmlElem);

private:

    //################
    //plane attributes
    //################

    Position xyz; //arbitrary point on the plane
    Direction normal; //normal vector

    double d; //smallest distance from origin


    //bool saveSimulationData();

    //QString getDisplayX(bool showDiff) const;
    //QString getDisplayY(bool showDiff) const;
    //QString getDisplayZ(bool showDiff) const;
    //QString getDisplayI(bool showDiff) const;
    //QString getDisplayJ(bool showDiff) const;
    //QString getDisplayK(bool showDiff) const;
    //QString getDisplayIsCommon() const;
    //QString getDisplayIsNominal() const;
    //QString getDisplayObs() const;
    //QString getDisplaySolved() const;
    //QString getDisplayMConfig() const;
    //QString getDisplayStdDev() const;

    //static MeasurementConfig defaultMeasurementConfig; //used as a default for this geometry type
};

#endif // PLANE_H
