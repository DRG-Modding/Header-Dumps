// Class GeometryCollectionEngine.ChaosDestructionListener
// Size: 0x420 (Inherited: 0x1f0)
struct UChaosDestructionListener : USceneComponent {
	char bIsCollisionEventListeningEnabled : 1; // 0x1f0(0x01)
	char bIsBreakingEventListeningEnabled : 1; // 0x1f0(0x01)
	char bIsTrailingEventListeningEnabled : 1; // 0x1f0(0x01)
	char UnknownData_1F0_3 : 5; // 0x1f0(0x01)
	char UnknownData_1F1[0x3]; // 0x1f1(0x03)
	struct FChaosCollisionEventRequestSettings CollisionEventRequestSettings; // 0x1f4(0x18)
	struct FChaosBreakingEventRequestSettings BreakingEventRequestSettings; // 0x20c(0x18)
	struct FChaosTrailingEventRequestSettings TrailingEventRequestSettings; // 0x224(0x18)
	char UnknownData_23C[0x4]; // 0x23c(0x04)
	struct TSet<struct AChaosSolverActor*> ChaosSolverActors; // 0x240(0x50)
	struct TSet<struct AGeometryCollectionActor*> GeometryCollectionActors; // 0x290(0x50)
	struct FMulticastInlineDelegate OnCollisionEvents; // 0x2e0(0x10)
	struct FMulticastInlineDelegate OnBreakingEvents; // 0x2f0(0x10)
	struct FMulticastInlineDelegate OnTrailingEvents; // 0x300(0x10)
	char UnknownData_310[0x110]; // 0x310(0x110)

	void SortTrailingEvents(struct TArray<struct FChaosTrailingEventData> TrailingEvents, enum class EChaosTrailingSortMethod SortMethod); // Function GeometryCollectionEngine.ChaosDestructionListener.SortTrailingEvents
	void SortCollisionEvents(struct TArray<struct FChaosCollisionEventData> CollisionEvents, enum class EChaosCollisionSortMethod SortMethod); // Function GeometryCollectionEngine.ChaosDestructionListener.SortCollisionEvents
	void SortBreakingEvents(struct TArray<struct FChaosBreakingEventData> BreakingEvents, enum class EChaosBreakingSortMethod SortMethod); // Function GeometryCollectionEngine.ChaosDestructionListener.SortBreakingEvents
	void SetTrailingEventRequestSettings(struct FChaosTrailingEventRequestSettings InSettings); // Function GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventRequestSettings
	void SetTrailingEventEnabled(bool bIsEnabled); // Function GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventEnabled
	void SetCollisionEventRequestSettings(struct FChaosCollisionEventRequestSettings InSettings); // Function GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventRequestSettings
	void SetCollisionEventEnabled(bool bIsEnabled); // Function GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventEnabled
	void SetBreakingEventRequestSettings(struct FChaosBreakingEventRequestSettings InSettings); // Function GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventRequestSettings
	void SetBreakingEventEnabled(bool bIsEnabled); // Function GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventEnabled
	void RemoveGeometryCollectionActor(struct AGeometryCollectionActor* GeometryCollectionActor); // Function GeometryCollectionEngine.ChaosDestructionListener.RemoveGeometryCollectionActor
	void RemoveChaosSolverActor(struct AChaosSolverActor* ChaosSolverActor); // Function GeometryCollectionEngine.ChaosDestructionListener.RemoveChaosSolverActor
	bool IsEventListening(); // Function GeometryCollectionEngine.ChaosDestructionListener.IsEventListening
	void AddGeometryCollectionActor(struct AGeometryCollectionActor* GeometryCollectionActor); // Function GeometryCollectionEngine.ChaosDestructionListener.AddGeometryCollectionActor
	void AddChaosSolverActor(struct AChaosSolverActor* ChaosSolverActor); // Function GeometryCollectionEngine.ChaosDestructionListener.AddChaosSolverActor
};

// Class GeometryCollectionEngine.GeometryCollectionActor
// Size: 0x230 (Inherited: 0x220)
struct AGeometryCollectionActor : AActor {
	struct UGeometryCollectionComponent* GeometryCollectionComponent; // 0x220(0x08)
	struct UGeometryCollectionDebugDrawComponent* GeometryCollectionDebugDrawComponent; // 0x228(0x08)

	bool RaycastSingle(struct FVector Start, struct FVector End, struct FHitResult OutHit); // Function GeometryCollectionEngine.GeometryCollectionActor.RaycastSingle
};

// Class GeometryCollectionEngine.GeometryCollectionCache
// Size: 0x50 (Inherited: 0x28)
struct UGeometryCollectionCache : UObject {
	struct FRecordedTransformTrack RecordedData; // 0x28(0x10)
	struct UGeometryCollection* SupportedCollection; // 0x38(0x08)
	struct FGuid CompatibleCollectionState; // 0x40(0x10)
};

// Class GeometryCollectionEngine.GeometryCollectionComponent
// Size: 0x840 (Inherited: 0x420)
struct UGeometryCollectionComponent : UMeshComponent {
	struct AChaosSolverActor* ChaosSolverActor; // 0x420(0x08)
	char UnknownData_428[0xe0]; // 0x428(0xe0)
	struct UGeometryCollection* RestCollection; // 0x508(0x08)
	struct TArray<struct AFieldSystemActor*> InitializationFields; // 0x510(0x10)
	bool Simulating; // 0x520(0x01)
	char UnknownData_521[0x7]; // 0x521(0x07)
	enum class EObjectStateTypeEnum ObjectType; // 0x528(0x01)
	bool EnableClustering; // 0x529(0x01)
	char UnknownData_52A[0x2]; // 0x52a(0x02)
	int32_t ClusterGroupIndex; // 0x52c(0x04)
	int32_t MaxClusterLevel; // 0x530(0x04)
	char UnknownData_534[0x4]; // 0x534(0x04)
	struct TArray<float> DamageThreshold; // 0x538(0x10)
	enum class EClusterConnectionTypeEnum ClusterConnectionType; // 0x548(0x01)
	char UnknownData_549[0x3]; // 0x549(0x03)
	int32_t CollisionGroup; // 0x54c(0x04)
	float CollisionSampleFraction; // 0x550(0x04)
	float LinearEtherDrag; // 0x554(0x04)
	float AngularEtherDrag; // 0x558(0x04)
	char UnknownData_55C[0x4]; // 0x55c(0x04)
	struct UChaosPhysicalMaterial* PhysicalMaterial; // 0x560(0x08)
	enum class EInitialVelocityTypeEnum InitialVelocityType; // 0x568(0x01)
	char UnknownData_569[0x3]; // 0x569(0x03)
	struct FVector InitialLinearVelocity; // 0x56c(0x0c)
	struct FVector InitialAngularVelocity; // 0x578(0x0c)
	char UnknownData_584[0x4]; // 0x584(0x04)
	struct FGeomComponentCacheParameters CacheParameters; // 0x588(0x50)
	struct FMulticastInlineDelegate NotifyGeometryCollectionPhysicsStateChange; // 0x5d8(0x10)
	struct FMulticastInlineDelegate NotifyGeometryCollectionPhysicsLoadingStateChange; // 0x5e8(0x10)
	char UnknownData_5F8[0x18]; // 0x5f8(0x18)
	struct FMulticastInlineDelegate OnChaosBreakEvent; // 0x610(0x10)
	float DesiredCacheTime; // 0x620(0x04)
	bool CachePlayback; // 0x624(0x01)
	char UnknownData_625[0x3]; // 0x625(0x03)
	struct FMulticastInlineDelegate OnChaosPhysicsCollision; // 0x628(0x10)
	bool bNotifyBreaks; // 0x638(0x01)
	bool bNotifyCollisions; // 0x639(0x01)
	char UnknownData_63A[0x1de]; // 0x63a(0x1de)
	struct UBodySetup* DummyBodySetup; // 0x818(0x08)
	char UnknownData_820[0x20]; // 0x820(0x20)

	void SetNotifyBreaks(bool bNewNotifyBreaks); // Function GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyBreaks
	void ReceivePhysicsCollision(struct FChaosPhysicsCollisionInfo CollisionInfo); // Function GeometryCollectionEngine.GeometryCollectionComponent.ReceivePhysicsCollision
	void NotifyGeometryCollectionPhysicsStateChange__DelegateSignature(struct UGeometryCollectionComponent* FracturedComponent); // DelegateFunction GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsStateChange__DelegateSignature
	void NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature(struct UGeometryCollectionComponent* FracturedComponent); // DelegateFunction GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature
	void ApplyPhysicsField(bool Enabled, enum class EGeometryCollectionPhysicsTypeEnum Target, struct UFieldSystemMetaData* MetaData, struct UFieldNodeBase* Field); // Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyPhysicsField
	void ApplyKinematicField(float Radius, struct FVector Position); // Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyKinematicField
};

// Class GeometryCollectionEngine.GeometryCollectionDebugDrawActor
// Size: 0x308 (Inherited: 0x220)
struct AGeometryCollectionDebugDrawActor : AActor {
	struct FGeometryCollectionDebugDrawWarningMessage WarningMessage; // 0x220(0x01)
	char UnknownData_221[0x7]; // 0x221(0x07)
	struct FGeometryCollectionDebugDrawActorSelectedRigidBody SelectedRigidBody; // 0x228(0x18)
	bool bDebugDrawWholeCollection; // 0x240(0x01)
	bool bDebugDrawHierarchy; // 0x241(0x01)
	bool bDebugDrawClustering; // 0x242(0x01)
	enum class EGeometryCollectionDebugDrawActorHideGeometry HideGeometry; // 0x243(0x01)
	bool bShowRigidBodyId; // 0x244(0x01)
	bool bShowRigidBodyCollision; // 0x245(0x01)
	bool bCollisionAtOrigin; // 0x246(0x01)
	bool bShowRigidBodyTransform; // 0x247(0x01)
	bool bShowRigidBodyInertia; // 0x248(0x01)
	bool bShowRigidBodyVelocity; // 0x249(0x01)
	bool bShowRigidBodyForce; // 0x24a(0x01)
	bool bShowRigidBodyInfos; // 0x24b(0x01)
	bool bShowTransformIndex; // 0x24c(0x01)
	bool bShowTransform; // 0x24d(0x01)
	bool bShowParent; // 0x24e(0x01)
	bool bShowLevel; // 0x24f(0x01)
	bool bShowConnectivityEdges; // 0x250(0x01)
	bool bShowGeometryIndex; // 0x251(0x01)
	bool bShowGeometryTransform; // 0x252(0x01)
	bool bShowBoundingBox; // 0x253(0x01)
	bool bShowFaces; // 0x254(0x01)
	bool bShowFaceIndices; // 0x255(0x01)
	bool bShowFaceNormals; // 0x256(0x01)
	bool bShowSingleFace; // 0x257(0x01)
	int32_t SingleFaceIndex; // 0x258(0x04)
	bool bShowVertices; // 0x25c(0x01)
	bool bShowVertexIndices; // 0x25d(0x01)
	bool bShowVertexNormals; // 0x25e(0x01)
	bool bUseActiveVisualization; // 0x25f(0x01)
	float PointThickness; // 0x260(0x04)
	float LineThickness; // 0x264(0x04)
	bool bTextShadow; // 0x268(0x01)
	char UnknownData_269[0x3]; // 0x269(0x03)
	float TextScale; // 0x26c(0x04)
	float NormalScale; // 0x270(0x04)
	float AxisScale; // 0x274(0x04)
	float ArrowScale; // 0x278(0x04)
	struct FColor RigidBodyIdColor; // 0x27c(0x04)
	float RigidBodyTransformScale; // 0x280(0x04)
	struct FColor RigidBodyCollisionColor; // 0x284(0x04)
	struct FColor RigidBodyInertiaColor; // 0x288(0x04)
	struct FColor RigidBodyVelocityColor; // 0x28c(0x04)
	struct FColor RigidBodyForceColor; // 0x290(0x04)
	struct FColor RigidBodyInfoColor; // 0x294(0x04)
	struct FColor TransformIndexColor; // 0x298(0x04)
	float TransformScale; // 0x29c(0x04)
	struct FColor LevelColor; // 0x2a0(0x04)
	struct FColor ParentColor; // 0x2a4(0x04)
	float ConnectivityEdgeThickness; // 0x2a8(0x04)
	struct FColor GeometryIndexColor; // 0x2ac(0x04)
	float GeometryTransformScale; // 0x2b0(0x04)
	struct FColor BoundingBoxColor; // 0x2b4(0x04)
	struct FColor FaceColor; // 0x2b8(0x04)
	struct FColor FaceIndexColor; // 0x2bc(0x04)
	struct FColor FaceNormalColor; // 0x2c0(0x04)
	struct FColor SingleFaceColor; // 0x2c4(0x04)
	struct FColor VertexColor; // 0x2c8(0x04)
	struct FColor VertexIndexColor; // 0x2cc(0x04)
	struct FColor VertexNormalColor; // 0x2d0(0x04)
	char UnknownData_2D4[0x4]; // 0x2d4(0x04)
	struct UBillboardComponent* SpriteComponent; // 0x2d8(0x08)
	char UnknownData_2E0[0x28]; // 0x2e0(0x28)
};

// Class GeometryCollectionEngine.GeometryCollectionDebugDrawComponent
// Size: 0xc8 (Inherited: 0xb0)
struct UGeometryCollectionDebugDrawComponent : UActorComponent {
	struct AGeometryCollectionDebugDrawActor* GeometryCollectionDebugDrawActor; // 0xb0(0x08)
	struct AGeometryCollectionRenderLevelSetActor* GeometryCollectionRenderLevelSetActor; // 0xb8(0x08)
	char UnknownData_C0[0x8]; // 0xc0(0x08)
};

// Class GeometryCollectionEngine.GeometryCollection
// Size: 0xd0 (Inherited: 0x28)
struct UGeometryCollection : UObject {
	char UnknownData_28[0x8]; // 0x28(0x08)
	struct TArray<struct UMaterialInterface*> Materials; // 0x30(0x10)
	enum class ECollisionTypeEnum CollisionType; // 0x40(0x01)
	enum class EImplicitTypeEnum ImplicitType; // 0x41(0x01)
	char UnknownData_42[0x2]; // 0x42(0x02)
	int32_t MinLevelSetResolution; // 0x44(0x04)
	int32_t MaxLevelSetResolution; // 0x48(0x04)
	int32_t MinClusterLevelSetResolution; // 0x4c(0x04)
	int32_t MaxClusterLevelSetResolution; // 0x50(0x04)
	float CollisionObjectReductionPercentage; // 0x54(0x04)
	bool bMassAsDensity; // 0x58(0x01)
	char UnknownData_59[0x3]; // 0x59(0x03)
	float Mass; // 0x5c(0x04)
	float MinimumMassClamp; // 0x60(0x04)
	float CollisionParticlesFraction; // 0x64(0x04)
	int32_t MaximumCollisionParticles; // 0x68(0x04)
	char UnknownData_6C[0x4]; // 0x6c(0x04)
	struct TArray<struct FGeometryCollectionSizeSpecificData> SizeSpecificData; // 0x70(0x10)
	bool EnableRemovePiecesOnFracture; // 0x80(0x01)
	char UnknownData_81[0x7]; // 0x81(0x07)
	struct TArray<struct UMaterialInterface*> RemoveOnFractureMaterials; // 0x88(0x10)
	struct FGuid PersistentGuid; // 0x98(0x10)
	struct FGuid StateGuid; // 0xa8(0x10)
	int32_t BoneSelectedMaterialIndex; // 0xb8(0x04)
	char UnknownData_BC[0x14]; // 0xbc(0x14)
};

// Class GeometryCollectionEngine.GeometryCollectionRenderLevelSetActor
// Size: 0x2c0 (Inherited: 0x220)
struct AGeometryCollectionRenderLevelSetActor : AActor {
	struct UVolumeTexture* TargetVolumeTexture; // 0x220(0x08)
	struct UMaterial* RayMarchMaterial; // 0x228(0x08)
	float SurfaceTolerance; // 0x230(0x04)
	float Isovalue; // 0x234(0x04)
	bool Enabled; // 0x238(0x01)
	bool RenderVolumeBoundingBox; // 0x239(0x01)
	char UnknownData_23A[0x86]; // 0x23a(0x86)
};

// Class GeometryCollectionEngine.SkeletalMeshSimulationComponent
// Size: 0x138 (Inherited: 0xb0)
struct USkeletalMeshSimulationComponent : UActorComponent {
	char UnknownData_B0[0x8]; // 0xb0(0x08)
	struct UChaosPhysicalMaterial* PhysicalMaterial; // 0xb8(0x08)
	struct AChaosSolverActor* ChaosSolverActor; // 0xc0(0x08)
	struct UPhysicsAsset* OverridePhysicsAsset; // 0xc8(0x08)
	bool bSimulating; // 0xd0(0x01)
	bool bNotifyCollisions; // 0xd1(0x01)
	enum class EObjectStateTypeEnum ObjectType; // 0xd2(0x01)
	char UnknownData_D3[0x1]; // 0xd3(0x01)
	float Density; // 0xd4(0x04)
	float MinMass; // 0xd8(0x04)
	float MaxMass; // 0xdc(0x04)
	enum class ECollisionTypeEnum CollisionType; // 0xe0(0x01)
	char UnknownData_E1[0x3]; // 0xe1(0x03)
	float ImplicitShapeParticlesPerUnitArea; // 0xe4(0x04)
	int32_t ImplicitShapeMinNumParticles; // 0xe8(0x04)
	int32_t ImplicitShapeMaxNumParticles; // 0xec(0x04)
	int32_t MinLevelSetResolution; // 0xf0(0x04)
	int32_t MaxLevelSetResolution; // 0xf4(0x04)
	int32_t CollisionGroup; // 0xf8(0x04)
	enum class EInitialVelocityTypeEnum InitialVelocityType; // 0xfc(0x01)
	char UnknownData_FD[0x3]; // 0xfd(0x03)
	struct FVector InitialLinearVelocity; // 0x100(0x0c)
	struct FVector InitialAngularVelocity; // 0x10c(0x0c)
	struct FMulticastInlineDelegate OnChaosPhysicsCollision; // 0x118(0x10)
	char UnknownData_128[0x10]; // 0x128(0x10)

	void ReceivePhysicsCollision(struct FChaosPhysicsCollisionInfo CollisionInfo); // Function GeometryCollectionEngine.SkeletalMeshSimulationComponent.ReceivePhysicsCollision
};

// Class GeometryCollectionEngine.StaticMeshSimulationComponent
// Size: 0x138 (Inherited: 0xb0)
struct UStaticMeshSimulationComponent : UActorComponent {
	char UnknownData_B0[0x8]; // 0xb0(0x08)
	bool Simulating; // 0xb8(0x01)
	bool bNotifyCollisions; // 0xb9(0x01)
	enum class EObjectStateTypeEnum ObjectType; // 0xba(0x01)
	char UnknownData_BB[0x1]; // 0xbb(0x01)
	float Mass; // 0xbc(0x04)
	enum class ECollisionTypeEnum CollisionType; // 0xc0(0x01)
	enum class EImplicitTypeEnum ImplicitType; // 0xc1(0x01)
	char UnknownData_C2[0x2]; // 0xc2(0x02)
	int32_t MinLevelSetResolution; // 0xc4(0x04)
	int32_t MaxLevelSetResolution; // 0xc8(0x04)
	enum class EInitialVelocityTypeEnum InitialVelocityType; // 0xcc(0x01)
	char UnknownData_CD[0x3]; // 0xcd(0x03)
	struct FVector InitialLinearVelocity; // 0xd0(0x0c)
	struct FVector InitialAngularVelocity; // 0xdc(0x0c)
	float DamageThreshold; // 0xe8(0x04)
	char UnknownData_EC[0x4]; // 0xec(0x04)
	struct UChaosPhysicalMaterial* PhysicalMaterial; // 0xf0(0x08)
	struct AChaosSolverActor* ChaosSolverActor; // 0xf8(0x08)
	struct FMulticastInlineDelegate OnChaosPhysicsCollision; // 0x100(0x10)
	char UnknownData_110[0x10]; // 0x110(0x10)
	struct TArray<struct UPrimitiveComponent*> SimulatedComponents; // 0x120(0x10)
	char UnknownData_130[0x8]; // 0x130(0x08)

	void ReceivePhysicsCollision(struct FChaosPhysicsCollisionInfo CollisionInfo); // Function GeometryCollectionEngine.StaticMeshSimulationComponent.ReceivePhysicsCollision
	void ForceRecreatePhysicsState(); // Function GeometryCollectionEngine.StaticMeshSimulationComponent.ForceRecreatePhysicsState
};

