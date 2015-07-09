#ifndef GLVIEWWIDGET_H
#define GLVIEWWIDGET_H

#include <QWidget>
#include <QWindow>
#include <QScreen>
#include <QWheelEvent>

#include <QHBoxLayout>

#include <Qt3DCore/QEntity>
#include <Qt3DCore/QCamera>
#include <Qt3DCore/QCameraLens>
#include <Qt3DCore/QTransform>
#include <Qt3DCore/QLookAtTransform>
#include <Qt3DCore/QScaleTransform>
#include <Qt3DCore/QRotateTransform>
#include <Qt3DCore/QTranslateTransform>
#include <Qt3DCore/QAspectEngine>

#include <Qt3DInput/QInputAspect>

#include <Qt3DRenderer/QRenderAspect>
#include <Qt3DRenderer/QFrameGraph>
#include <Qt3DRenderer/QForwardRenderer>
#include <Qt3DRenderer/QPhongMaterial>

#include <Qt3DRenderer/QCylinderMesh>
#include <Qt3DRenderer/QSphereMesh>
#include <Qt3DRenderer/QTorusMesh>

#include <QPropertyAnimation>


#include "glwindow.h"
#include "scenebuilder.h"


class GlViewWidget : public QWidget
{
    Q_OBJECT
public:
    explicit GlViewWidget(QWidget *parent = 0);

    QPointer<OiJob> getCurrentJob() const;
    void setCurrentJob(const QPointer<OiJob> &value);

signals:

protected:
     void mouseDoubleClickEvent(QMouseEvent * event);
     void wheelEvent(QWheelEvent * event);


public slots:

private:
     Qt3D::QAspectEngine engine;
     Qt3D::QCamera *cameraEntity;
     Qt3D::QInputAspect *input;

     QVector3D cameraPosition;

     SceneBuilder scene;


};

#endif // GLVIEWWIDGET_H
