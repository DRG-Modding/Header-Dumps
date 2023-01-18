#ifndef UE4SS_SDK_GeometryCollectionEngine_HPP
#define UE4SS_SDK_GeometryCollectionEngine_HPP

#include "GeometryCollectionEngine_enums.hpp"

struct FChaosBreakingEventData
{
    FVector Location;
    FVector Velocity;
    float Mass;

};

struct FChaosBreakingEventRequestSettings
{
    int32 MaxNumberOfResults;
    float MinRadius;
    float MinSpeed;
    float MinMass;
    float MaxDistance;
    EChaosBreakingSortMethod SortMethod;

};

struct FChaosCollisionEventData
{
    FVector Location;
    FVector Normal;
    FVector Velocity1;
    FVector Velocity2;
    float Mass1;
    float Mass2;
    FVector Impulse;

};

struct FChaosCollisionEventRequestSettings
{
    int32 MaxNumberResults;
    float MinMass;
    float MinSpeed;
    float MinImpulse;
    float MaxDistance;
    EChaosCollisionSortMethod SortMethod;

};

struct FChaosTrailingEventData
{
    FVector Location;
    FVector Velocity;
    FVector AngularVelocity;
    float Mass;
    int32 ParticleIndex;

};

struct FChaosTrailingEventRequestSettings
{
    int32 MaxNumberOfResults;
    float MinMass;
    float MinSpeed;
    float MinAngularSpeed;
    float MaxDistance;
    EChaosTrailingSortMethod SortMethod;

};

struct FGeomComponentCacheParameters
{
    EGeometryCollectionCacheType CacheMode;
    class UGeometryCollectionCache* TargetCache;
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

};

struct FGeometryCollectionDebugDrawActorSelectedRigidBody
{
    int32 ID;
    class AChaosSolverActor* Solver;
    class AGeometryCollectionActor* GeometryCollection;

};

struct FGeometryCollectionDebugDrawWarningMessage
{
};

struct FGeometryCollectionRepData
{
};

struct FGeometryCollectionSizeSpecificData
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

};

struct FGeometryCollectionSource
{
    FSoftObjectPath SourceGeometryObject;
    FTransform LocalTransform;
    TArray<class UMaterialInterface*> SourceMaterial;

};

class AGeometryCollectionActor : public AActor
{
    class UGeometryCollectionComponent* GeometryCollectionComponent;
    class UGeometryCollectionDebugDrawComponent* GeometryCollectionDebugDrawComponent;

    bool RaycastSingle(FVector Start, FVector End, FHitResult& OutHit);
};

class AGeometryCollectionDebugDrawActor : public AActor
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
    class UBillboardComponent* SpriteComponent;

};

class AGeometryCollectionRenderLevelSetActor : public AActor
{
    class UVolumeTexture* TargetVolumeTexture;
    class UMaterial* RayMarchMaterial;
    float SurfaceTolerance;
    float Isovalue;
    bool Enabled;
    bool RenderVolumeBoundingBox;

};

class UChaosDestructionListener : public USceneComponent
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
    void RemoveGeometryCollectionActor(class AGeometryCollectionActor* GeometryCollectionActor);
    void RemoveChaosSolverActor(class AChaosSolverActor* ChaosSolverActor);
    bool IsEventListening();
    void AddGeometryCollectionActor(class AGeometryCollectionActor* GeometryCollectionActor);
    void AddChaosSolverActor(class AChaosSolverActor* ChaosSolverActor);
};

class UGeometryCollection : public UObject
{
    bool EnableClustering;
    int32 ClusterGroupIndex;
    int32 MaxClusterLevel;
    TArray<float> DamageThreshold;
    EClusterConnectionTypeEnum ClusterConnectionType;
    TArray<FGeometryCollectionSource> GeometrySource;
    TArray<class UMaterialInterface*> Materials;
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
    TArray<class UMaterialInterface*> RemoveOnFractureMaterials;
    FGuid PersistentGuid;
    FGuid StateGuid;
    int32 BoneSelectedMaterialIndex;

};

class UGeometryCollectionCache : public UObject
{
    FRecordedTransformTrack RecordedData;
    class UGeometryCollection* SupportedCollection;
    FGuid CompatibleCollectionState;

};

class UGeometryCollectionComponent : public UMeshComponent
{
    class AChaosSolverActor* ChaosSolverActor;
    class UGeometryCollection* RestCollection;
    TArray<class AFieldSystemActor*> InitializationFields;
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
    class UChaosPhysicalMaterial* PhysicalMaterial;
    EInitialVelocityTypeEnum InitialVelocityType;
    FVector InitialLinearVelocity;
    FVector InitialAngularVelocity;
    class UPhysicalMaterial* PhysicalMaterialOverride;
    FGeomComponentCacheParameters CacheParameters;
    FGeometryCollectionComponentNotifyGeometryCollectionPhysicsStateChange NotifyGeometryCollectionPhysicsStateChange;
    void NotifyGeometryCollectionPhysicsStateChange(class UGeometryCollectionComponent* FracturedComponent);
    FGeometryCollectionComponentNotifyGeometryCollectionPhysicsLoadingStateChange NotifyGeometryCollectionPhysicsLoadingStateChange;
    void NotifyGeometryCollectionPhysicsLoadingStateChange(class UGeometryCollectionComponent* FracturedComponent);
    FGeometryCollectionComponentOnChaosBreakEvent OnChaosBreakEvent;
    void OnChaosBreakEvent(const FChaosBreakEvent& BreakEvent);
    float DesiredCacheTime;
    bool CachePlayback;
    FGeometryCollectionComponentOnChaosPhysicsCollision OnChaosPhysicsCollision;
    void OnChaosPhysicsCollision(const FChaosPhysicsCollisionInfo& CollisionInfo);
    bool bNotifyBreaks;
    bool bNotifyCollisions;
    bool bEnableReplication;
    bool bEnableAbandonAfterLevel;
    int32 ReplicationAbandonClusterLevel;
    FGeometryCollectionRepData RepData;
    class UBodySetup* DummyBodySetup;

    void SetNotifyBreaks(bool bNewNotifyBreaks);
    void ReceivePhysicsCollision(const FChaosPhysicsCollisionInfo& CollisionInfo);
    void OnRep_RepData(const FGeometryCollectionRepData& OldData);
    void NotifyGeometryCollectionPhysicsStateChange__DelegateSignature(class UGeometryCollectionComponent* FracturedComponent);
    void NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature(class UGeometryCollectionComponent* FracturedComponent);
    void NetAbandonCluster(int32 TransformIndex);
    void ApplyPhysicsField(bool Enabled, EGeometryCollectionPhysicsTypeEnum Target, class UFieldSystemMetaData* MetaData, class UFieldNodeBase* Field);
    void ApplyKinematicField(float Radius, FVector Position);
};

class UGeometryCollectionDebugDrawComponent : public UActorComponent
{
    class AGeometryCollectionDebugDrawActor* GeometryCollectionDebugDrawActor;
    class AGeometryCollectionRenderLevelSetActor* GeometryCollectionRenderLevelSetActor;

};

class USkeletalMeshSimulationComponent : public UActorComponent
{
    class UChaosPhysicalMaterial* PhysicalMaterial;
    class AChaosSolverActor* ChaosSolverActor;
    class UPhysicsAsset* OverridePhysicsAsset;
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
};

class UStaticMeshSimulationComponent : public UActorComponent
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
    class UChaosPhysicalMaterial* PhysicalMaterial;
    class AChaosSolverActor* ChaosSolverActor;
    FStaticMeshSimulationComponentOnChaosPhysicsCollision OnChaosPhysicsCollision;
    void OnChaosPhysicsCollision(const FChaosPhysicsCollisionInfo& CollisionInfo);
    TArray<class UPrimitiveComponent*> SimulatedComponents;

    void ReceivePhysicsCollision(const FChaosPhysicsCollisionInfo& CollisionInfo);
    void ForceRecreatePhysicsState();
};

#endif
