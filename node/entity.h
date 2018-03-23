#pragma once

#include <Qt3DCore/QEntity>
#include <Qt3DCore/QTransform>

#include <Qt3DRender/QAttribute>
#include <Qt3DRender/QBuffer>
#include <Qt3DRender/QCamera>
#include <Qt3DRender/QCameraLens>
#include <Qt3DRender/QGeometryRenderer>
#include <Qt3DRender/QGeometry>

#include <Qt3DExtras/QPhongMaterial>
#include <Qt3DExtras/QFirstPersonCameraController>
#include <Qt3DExtras/QForwardRenderer>
#include <Qt3DExtras/Qt3DWindow>
#include <Qt3DExtras/QSphereMesh>
#include <Qt3DRender/QGeometryRenderer>

class MyEntity : public Qt3DCore::QEntity {
    public:
        MyEntity( Qt3DCore::QEntity* parent=0 ) : Qt3DCore::QEntity(parent) {
                Qt3DRender::QMaterial *material = new Qt3DExtras::QPhongMaterial;

                Qt3DExtras::QSphereMesh *sphereMesh = new Qt3DExtras::QSphereMesh;
                sphereMesh->setRadius(8);

                addComponent(sphereMesh);
                addComponent(material);
        }

        virtual ~MyEntity() {}
};



