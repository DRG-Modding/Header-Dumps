// BlueprintGeneratedClass BP_Snowball.BP_Snowball_C
// Size: 0x250 (Inherited: 0x230)
struct ABP_Snowball_C : AThrowableActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UDamageComponent* Damage; // 0x238(0x08)
	struct USphereComponent* Sphere; // 0x240(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x248(0x08)

	void ReceiveBeginPlay(); // Function BP_Snowball.BP_Snowball_C.ReceiveBeginPlay
	void Impact(); // Function BP_Snowball.BP_Snowball_C.Impact
	void ReceiveHit(struct UPrimitiveComponent* MyComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, bool bSelfMoved, struct FVector HitLocation, struct FVector HitNormal, struct FVector NormalImpulse, struct FHitResult Hit); // Function BP_Snowball.BP_Snowball_C.ReceiveHit
	void ReceiveIgnoreCharacter(struct APlayerCharacter* Character); // Function BP_Snowball.BP_Snowball_C.ReceiveIgnoreCharacter
	void ExecuteUbergraph_BP_Snowball(int32_t EntryPoint); // Function BP_Snowball.BP_Snowball_C.ExecuteUbergraph_BP_Snowball
};

