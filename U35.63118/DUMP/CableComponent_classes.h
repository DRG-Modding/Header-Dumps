// Class CableComponent.CableActor
// Size: 0x228 (Inherited: 0x220)
struct ACableActor : AActor {
	UCableComponent* CableComponent; // 0x220(0x08)
};

// Class CableComponent.CableComponent
// Size: 0x4b0 (Inherited: 0x420)
struct UCableComponent : UMeshComponent {
	bool bAttachStart; // 0x418(0x01)
	bool bAttachEnd; // 0x419(0x01)
	FComponentReference AttachEndTo; // 0x420(0x28)
	FName AttachEndToSocketName; // 0x448(0x08)
	FVector EndLocation; // 0x450(0x0c)
	float CableLength; // 0x45c(0x04)
	int32_t NumSegments; // 0x460(0x04)
	float SubstepTime; // 0x464(0x04)
	int32_t SolverIterations; // 0x468(0x04)
	bool bEnableStiffness; // 0x46c(0x01)
	bool bEnableCollision; // 0x46d(0x01)
	float CollisionFriction; // 0x470(0x04)
	FVector CableForce; // 0x474(0x0c)
	float CableGravityScale; // 0x480(0x04)
	float CableWidth; // 0x484(0x04)
	int32_t NumSides; // 0x488(0x04)
	float TileMaterial; // 0x48c(0x04)

	void SetAttachEndToComponent(USceneComponent* Component, FName SocketName);
	void SetAttachEndTo(AActor* Actor, FName ComponentProperty, FName SocketName);
	void GetCableParticleLocations(TArray<FVector> Locations);
	USceneComponent* GetAttachedComponent();
	AActor* GetAttachedActor();
};

