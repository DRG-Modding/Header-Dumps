// Class ChaosSolverEngine.ChaosDebugDrawComponent
// Size: 0xb8 (Inherited: 0xb0)
struct UChaosDebugDrawComponent : UActorComponent {
};

// Class ChaosSolverEngine.ChaosEventListenerComponent
// Size: 0xb8 (Inherited: 0xb0)
struct UChaosEventListenerComponent : UActorComponent {
};

// Class ChaosSolverEngine.ChaosGameplayEventDispatcher
// Size: 0x270 (Inherited: 0xb8)
struct UChaosGameplayEventDispatcher : UChaosEventListenerComponent {
	TMap<UPrimitiveComponent*, FChaosHandlerSet> CollisionEventRegistrations; // 0x1c8(0x50)
	TMap<UPrimitiveComponent*, FBreakEventCallbackWrapper> BreakEventRegistrations; // 0x218(0x50)
};

// Class ChaosSolverEngine.ChaosNotifyHandlerInterface
// Size: 0x28 (Inherited: 0x28)
struct UChaosNotifyHandlerInterface : UInterface {
};

// Class ChaosSolverEngine.ChaosSolverEngineBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UChaosSolverEngineBlueprintLibrary : UBlueprintFunctionLibrary {

	FHitResult ConvertPhysicsCollisionToHitResult(FChaosPhysicsCollisionInfo PhysicsCollision);
};

// Class ChaosSolverEngine.ChaosSolver
// Size: 0x28 (Inherited: 0x28)
struct UChaosSolver : UObject {
};

// Class ChaosSolverEngine.ChaosSolverActor
// Size: 0x2a8 (Inherited: 0x220)
struct AChaosSolverActor : AActor {
	float TimeStepMultiplier; // 0x220(0x04)
	int32_t CollisionIterations; // 0x224(0x04)
	int32_t PushOutIterations; // 0x228(0x04)
	int32_t PushOutPairIterations; // 0x22c(0x04)
	float ClusterConnectionFactor; // 0x230(0x04)
	enum class EClusterConnectionTypeEnum ClusterUnionConnectionType; // 0x234(0x01)
	bool DoGenerateCollisionData; // 0x235(0x01)
	FSolverCollisionFilterSettings CollisionFilterSettings; // 0x238(0x10)
	bool DoGenerateBreakingData; // 0x248(0x01)
	FSolverBreakingFilterSettings BreakingFilterSettings; // 0x24c(0x10)
	bool DoGenerateTrailingData; // 0x25c(0x01)
	FSolverTrailingFilterSettings TrailingFilterSettings; // 0x260(0x10)
	bool bHasFloor; // 0x270(0x01)
	float FloorHeight; // 0x274(0x04)
	float MassScale; // 0x278(0x04)
	bool bGenerateContactGraph; // 0x27c(0x01)
	FChaosDebugSubstepControl ChaosDebugSubstepControl; // 0x27d(0x03)
	UBillboardComponent* SpriteComponent; // 0x280(0x08)
	UChaosGameplayEventDispatcher* GameplayEventDispatcherComponent; // 0x2a0(0x08)

	void SetSolverActive(bool bActive);
	void SetAsCurrentWorldSolver();
};

// Class ChaosSolverEngine.ChaosSolverSettings
// Size: 0x58 (Inherited: 0x38)
struct UChaosSolverSettings : UDeveloperSettings {
	FSoftClassPath DefaultChaosSolverActorClass; // 0x40(0x18)
};

