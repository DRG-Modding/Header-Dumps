// Class CableComponent.CableActor
// Size: 0x228 (Inherited: 0x220)
struct ACableActor : AActor {
	struct UCableComponent* CableComponent; // 0x220(0x08)
};

// Class CableComponent.CableComponent
// Size: 0x4b0 (Inherited: 0x420)
struct UCableComponent : UMeshComponent {
	bool bAttachStart; // 0x418(0x01)
	bool bAttachEnd; // 0x419(0x01)
	struct FComponentReference AttachEndTo; // 0x420(0x28)
	struct FName AttachEndToSocketName; // 0x448(0x08)
	struct FVector EndLocation; // 0x450(0x0c)
	float CableLength; // 0x45c(0x04)
	int32_t NumSegments; // 0x460(0x04)
	float SubstepTime; // 0x464(0x04)
	int32_t SolverIterations; // 0x468(0x04)
	bool bEnableStiffness; // 0x46c(0x01)
	bool bEnableCollision; // 0x46d(0x01)
	float CollisionFriction; // 0x470(0x04)
	struct FVector CableForce; // 0x474(0x0c)
	float CableGravityScale; // 0x480(0x04)
	float CableWidth; // 0x484(0x04)
	int32_t NumSides; // 0x488(0x04)
	float TileMaterial; // 0x48c(0x04)
	char UnknownData_490[0x20]; // 0x490(0x20)

	void SetAttachEndToComponent(struct USceneComponent* Component, struct FName SocketName); // Function CableComponent.CableComponent.SetAttachEndToComponent
	void SetAttachEndTo(struct AActor* Actor, struct FName ComponentProperty, struct FName SocketName); // Function CableComponent.CableComponent.SetAttachEndTo
	void GetCableParticleLocations(struct TArray<struct FVector> Locations); // Function CableComponent.CableComponent.GetCableParticleLocations
	struct USceneComponent* GetAttachedComponent(); // Function CableComponent.CableComponent.GetAttachedComponent
	struct AActor* GetAttachedActor(); // Function CableComponent.CableComponent.GetAttachedActor
};

