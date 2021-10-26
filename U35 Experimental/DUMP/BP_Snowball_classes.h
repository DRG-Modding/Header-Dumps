// BlueprintGeneratedClass BP_Snowball.BP_Snowball_C
// Size: 0x250 (Inherited: 0x230)
struct ABP_Snowball_C : AThrowableActor {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UDamageComponent* Damage; 
	UPROPERTY(BlueprintReadWrite) USphereComponent* Sphere; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* StaticMesh; 

	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void Impact();
	UFUNCTION(BlueprintCallable) void ReceiveHit(UPrimitiveComponent* MyComp, AActor* Other, UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, FHitResult Hit);
	UFUNCTION(BlueprintCallable) void ReceiveIgnoreCharacter(APlayerCharacter* Character);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_Snowball(int32_t EntryPoint);
};

