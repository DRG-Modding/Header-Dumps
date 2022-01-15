#ifndef UE4SS_SDK_GeometryCollectionEngine_HPP
#define UE4SS_SDK_GeometryCollectionEngine_HPP

#include "GeometryCollectionEngine_enums.hpp"

class UChaosDestructionListener : USceneComponent
{
    uint8 bIsCollisionEventListeningEnabled;
    uint8 bIsBreakingEventListeningEnabled;
    uint8 bIsTrailingEventListeningEnabled;
    FChaosCollisionEventRequestSettings CollisionEventRequestSettings;
    FChaosBreakingEventRequestSettings BreakingEventRequestSettings;
    FChaosTrailingEventRequestSettings TrailingEventRequestSettings;
    TSet<AChaosSolverActor*> ChaosSolverActors;
    TSet<AGeometryCollectionActor*> GeometryCollectionActors;
    FChaosDestructionListenerOnCollisionEvents OnCollisionEvents;
    void OnChaosCollisionEvents(const TArray<FChaosCollisionEventData>& CollisionEvents);
    FChaosDestructionListenerOnBreakingEvents OnBreakingEvents;
    void OnChaosBreakingEvents(const TArray<FChaosBreakingEventData>& BreakingEvents);
    FChaosDestructionListenerOnTrailingEvents OnTrailingEvents;
    void OnChaosTrailingEvents(const TArray<FChaosTrailingEventData>& TrailingEvents);

    void SortTrailingEvents(TArray<FChaosTrailingEventData>& TrailingEvents, EChaosTrailingSortMethod SortMethod);
    void SortCollisionEvents(TArray<FChaosCollisionEventData>& CollisionEvents, EChaosCollisionSortMethod SortMethod);
    void SortBreakingEvents(TArray<FChaosBreakingEventData>& BreakingEvents, EChaosBreakingSortMethod SortMethod);
    void SetTrailingEventRequestSettings(const FChaosTrailingEventRequestSettings& InSettings);
    void SetTrailingEventEnabled(bool bIsEnabled);
    void SetCollisionEventRequestSettings(const FChaosCollisionEventRequestSettings& InSettings);
    void SetCollisionEventEnabled(bool bIsEnabled);
    void SetBreakingEventRequestSettings(const FChaosBreakingEventRequestSettings& InSettings);
    void SetBreakingEventEnabled(bool bIsEnabled);
    void RemoveGeometryCollectionActor(AGeometryCollectionActor* GeometryCollectionActor);
    void RemoveChaosSolverActor(AChaosSolverActor* ChaosSolverActor);
    bool IsEventListening();
    void AddGeometryCollectionActor(AGeometryCollectionActor* GeometryCollectionActor);
    void AddChaosSolverActor(AChaosSolverActor* ChaosSolverActor);
}

class AGeometryCollectionActor : AActor
{
    UGeometryCollectionComponent* GeometryCollectionComponent;
    UGeometryCollectionDebugDrawComponent* GeometryCollectionDebugDrawComponent;

    bool RaycastSingle(FVector Start, FVector End, FHitResult& OutHit);
}

class UGeometryCollectionCache : UObject
{
    FRecordedTransformTrack RecordedData;
    UGeometryCollection* SupportedCollection;
    FGuid CompatibleCollectionState;
}

class UGeometryCollectionComponent : UMeshComponent
{
    AChaosSolverActor* ChaosSolverActor;
    UGeometryCollection* RestCollection;
    TArray<AFieldSystemActor*> InitializationFields;
    bool Simulating;
    EObjectStateTypeEnum ObjectType;
    bool EnableClustering;
    int32 ClusterGroupIndex;
    int32 MaxClusterLevel;
    TArray<float> DamageThreshold;
    EClusterConnectionTypeEnum ClusterConnectionType;
    int32 CollisionGroup;
    float CollisionSampleFraction;
    float LinearEtherDrag;
    float AngularEtherDrag;
    UChaosPhysicalMaterial* PhysicalMaterial;
    EInitialVelocityTypeEnum InitialVelocityType;
    FVector InitialLinearVelocity;
    FVector InitialAngularVelocity;
    FGeomComponentCacheParameters CacheParameters;
    FGeometryCollectionComponentNotifyGeometryCollectionPhysicsStateChange NotifyGeometryCollectionPhysicsStateChange;
    void NotifyGeometryCollectionPhysicsStateChange(UGeometryCollectionComponent* FracturedComponent);
    FGeometryCollectionComponentNotifyGeometryCollectionPhysicsLoadingStateChange NotifyGeometryCollectionPhysicsLoadingStateChange;
    void NotifyGeometryCollectionPhysicsLoadingStateChange(UGeometryCollectionComponent* FracturedComponent);
    FGeometryCollectionComponentOnChaosBreakEvent OnChaosBreakEvent;
    void OnChaosBreakEvent(const FChaosBreakEvent& BreakEvent);
    float DesiredCacheTime;
    bool CachePlayback;
    FGeometryCollectionComponentOnChaosPhysicsCollision OnChaosPhysicsCollision;
    void OnChaosPhysicsCollision(const FChaosPhysicsCollisionInfo& CollisionInfo);
    bool bNotifyBreaks;
    bool bNotifyCollisions;
    UBodySetup* DummyBodySetup;

    void SetNotifyBreaks(bool bNewNotifyBreaks);
    void ReceivePhysicsCollision(const FChaosPhysicsCollisionInfo& CollisionInfo);
    void NotifyGeometryCollectionPhysicsStateChange__DelegateSignature(UGeometryCollectionComponent* FracturedComponent);
    void NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature(UGeometryCollectionComponent* FracturedComponent);
    void ApplyPhysicsField(bool Enabled, EGeometryCollectionPhysicsTypeEnum Target, UFieldSystemMetaData* MetaData, UFieldNodeBase* Field);
    void ApplyKinematicField(float Radius, FVector Position);
}

class AGeometryCollectionDebugDrawActor : AActor
{
    FGeometryCollectionDebugDrawWarningMessage WarningMessage;
    FGeometryCollectionDebugDrawActorSelectedRigidBody SelectedRigidBody;
    bool bDebugDrawWholeCollection;
    bool bDebugDrawHierarchy;
    bool bDebugDrawClustering;
    EGeometryCollectionDebugDrawActorHideGeometry HideGeometry;
    bool bShowRigidBodyId;
    bool bShowRigidBodyCollision;
    bool bCollisionAtOrigin;
    bool bShowRigidBodyTransform;
    bool bShowRigidBodyInertia;
    bool bShowRigidBodyVelocity;
    bool bShowRigidBodyForce;
    bool bShowRigidBodyInfos;
    bool bShowTransformIndex;
    bool bShowTransform;
    bool bShowParent;
    bool bShowLevel;
    bool bShowConnectivityEdges;
    bool bShowGeometryIndex;
    bool bShowGeometryTransform;
    bool bShowBoundingBox;
    bool bShowFaces;
    bool bShowFaceIndices;
    bool bShowFaceNormals;
    bool bShowSingleFace;
    int32 SingleFaceIndex;
    bool bShowVertices;
    bool bShowVertexIndices;
    bool bShowVertexNormals;
    bool bUseActiveVisualization;
    float PointThickness;
    float LineThickness;
    bool bTextShadow;
    float TextScale;
    float NormalScale;
    float AxisScale;
    float ArrowScale;
    FColor RigidBodyIdColor;
    float RigidBodyTransformScale;
    FColor RigidBodyCollisionColor;
    FColor RigidBodyInertiaColor;
    FColor RigidBodyVelocityColor;
    FColor RigidBodyForceColor;
    FColor RigidBodyInfoColor;
    FColor TransformIndexColor;
    float TransformScale;
    FColor LevelColor;
    FColor ParentColor;
    float ConnectivityEdgeThickness;
    FColor GeometryIndexColor;
    float GeometryTransformScale;
    FColor BoundingBoxColor;
    FColor FaceColor;
    FColor FaceIndexColor;
    FColor FaceNormalColor;
    FColor SingleFaceColor;
    FColor VertexColor;
    FColor VertexIndexColor;
    FColor VertexNormalColor;
    UBillboardComponent* SpriteComponent;
}

class UGeometryCollectionDebugDrawComponent : UActorComponent
{
    AGeometryCollectionDebugDrawActor* GeometryCollectionDebugDrawActor;
    AGeometryCollectionRenderLevelSetActor* GeometryCollectionRenderLevelSetActor;
}

class UGeometryCollection : UObject
{
    TArray<UMaterialInterface*> Materials;
    ECollisionTypeEnum CollisionType;
    EImplicitTypeEnum ImplicitType;
    int32 MinLevelSetResolution;
    int32 MaxLevelSetResolution;
    int32 MinClusterLevelSetResolution;
    int32 MaxClusterLevelSetResolution;
    float CollisionObjectReductionPercentage;
    bool bMassAsDensity;
    float Mass;
    float MinimumMassClamp;
    float CollisionParticlesFraction;
    int32 MaximumCollisionParticles;
    TArray<FGeometryCollectionSizeSpecificData> SizeSpecificData;
    bool EnableRemovePiecesOnFracture;
    TArray<UMaterialInterface*> RemoveOnFractureMaterials;
    FGuid PersistentGuid;
    FGuid StateGuid;
    int32 BoneSelectedMaterialIndex;
}

class AGeometryCollectionRenderLevelSetActor : AActor
{
    UVolumeTexture* TargetVolumeTexture;
    UMaterial* RayMarchMaterial;
    float SurfaceTolerance;
    float Isovalue;
    bool Enabled;
    bool RenderVolumeBoundingBox;
}

class USkeletalMeshSimulationComponent : UActorComponent
{
    UChaosPhysicalMaterial* PhysicalMaterial;
    AChaosSolverActor* ChaosSolverActor;
    UPhysicsAsset* OverridePhysicsAsset;
    bool bSimulating;
    bool bNotifyCollisions;
    EObjectStateTypeEnum ObjectType;
    float Density;
    float MinMass;
    float MaxMass;
    ECollisionTypeEnum CollisionType;
    float ImplicitShapeParticlesPerUnitArea;
    int32 ImplicitShapeMinNumParticles;
    int32 ImplicitShapeMaxNumParticles;
    int32 MinLevelSetResolution;
    int32 MaxLevelSetResolution;
    int32 CollisionGroup;
    EInitialVelocityTypeEnum InitialVelocityType;
    FVector InitialLinearVelocity;
    FVector InitialAngularVelocity;
    FSkeletalMeshSimulationComponentOnChaosPhysicsCollision OnChaosPhysicsCollision;
    void OnChaosPhysicsCollision(const FChaosPhysicsCollisionInfo& CollisionInfo);

    void ReceivePhysicsCollision(const FChaosPhysicsCollisionInfo& CollisionInfo);
}

class UStaticMeshSimulationComponent : UActorComponent
{
    bool Simulating;
    bool bNotifyCollisions;
    EObjectStateTypeEnum ObjectType;
    float Mass;
    ECollisionTypeEnum CollisionType;
    EImplicitTypeEnum ImplicitType;
    int32 MinLevelSetResolution;
    int32 MaxLevelSetResolution;
    EInitialVelocityTypeEnum InitialVelocityType;
    FVector InitialLinearVelocity;
    FVector InitialAngularVelocity;
    float DamageThreshold;
    UChaosPhysicalMaterial* PhysicalMaterial;
    AChaosSolverActor* ChaosSolverActor;
    FStaticMeshSimulationComponentOnChaosPhysicsCollision OnChaosPhysicsCollision;
    void OnChaosPhysicsCollision(const FChaosPhysicsCollisionInfo& CollisionInfo);
    TArray<UPrimitiveComponent*> SimulatedComponents;

    void ReceivePhysicsCollision(const FChaosPhysicsCollisionInfo& CollisionInfo);
    void ForceRecreatePhysicsState();
}

struct UGeomComponentCacheParameters
{
    EGeometryCollectionCacheType CacheMode;
    UGeometryCollectionCache* TargetCache;
    float ReverseCacheBeginTime;
    bool SaveCollisionData;
    bool DoGenerateCollisionData;
    int32 CollisionDataSizeMax;
    bool DoCollisionDataSpatialHash;
    float CollisionDataSpatialHashRadius;
    int32 MaxCollisionPerCell;
    bool SaveBreakingData;
    bool DoGenerateBreakingData;
    int32 BreakingDataSizeMax;
    bool DoBreakingDataSpatialHash;
    float BreakingDataSpatialHashRadius;
    int32 MaxBreakingPerCell;
    bool SaveTrailingData;
    bool DoGenerateTrailingData;
    int32 TrailingDataSizeMax;
    float TrailingMinSpeedThreshold;
    float TrailingMinVolumeThreshold;
}

struct UChaosCollisionEventData
{
    FVector Location;
    FVector Normal;
    FVector Velocity1;
    FVector Velocity2;
    float Mass1;
    float Mass2;
    FVector Impulse;
}

struct UChaosBreakingEventData
{
    FVector Location;
    FVector Velocity;
    float Mass;
}

struct UChaosTrailingEventData
{
    FVector Location;
    FVector Velocity;
    FVector AngularVelocity;
    float Mass;
    int32 ParticleIndex;
}

struct UChaosBreakingEventRequestSettings
{
    int32 MaxNumberOfResults;
    float MinRadius;
    float MinSpeed;
    float MinMass;
    float MaxDistance;
    EChaosBreakingSortMethod SortMethod;
}

struct UChaosCollisionEventRequestSettings
{
    int32 MaxNumberResults;
    float MinMass;
    float MinSpeed;
    float MinImpulse;
    float MaxDistance;
    EChaosCollisionSortMethod SortMethod;
}

struct UChaosTrailingEventRequestSettings
{
    int32 MaxNumberOfResults;
    float MinMass;
    float MinSpeed;
    float MinAngularSpeed;
    float MaxDistance;
    EChaosTrailingSortMethod SortMethod;
}

struct UGeometryCollectionDebugDrawActorSelectedRigidBody
{
    int32 ID;
    AChaosSolverActor* Solver;
    AGeometryCollectionActor* GeometryCollection;
}

struct UGeometryCollectionDebugDrawWarningMessage
{
}

struct UGeometryCollectionSizeSpecificData
{
    float MaxSize;
    ECollisionTypeEnum CollisionType;
    EImplicitTypeEnum ImplicitType;
    int32 MinLevelSetResolution;
    int32 MaxLevelSetResolution;
    int32 MinClusterLevelSetResolution;
    int32 MaxClusterLevelSetResolution;
    int32 CollisionObjectReductionPercentage;
    float CollisionParticlesFraction;
    int32 MaximumCollisionParticles;
}

#endif
