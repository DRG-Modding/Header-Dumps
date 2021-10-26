// BlueprintGeneratedClass 025_SpectatorCam.025_SpectatorCam_C
// Size: 0x26c (Inherited: 0x220)
struct A025_SpectatorCam_C : AActor {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UCameraComponent* Camera; 
	UPROPERTY(BlueprintReadWrite) USpringArmComponent* SpringArm; 
	UPROPERTY(BlueprintReadWrite) USceneComponent* DefaultSceneRoot; 
	UPROPERTY(BlueprintReadWrite) float Speed; 
	UPROPERTY(BlueprintReadWrite) float Target Distance; 
	UPROPERTY(BlueprintReadWrite) float New Distance; 
	UPROPERTY(BlueprintReadWrite) bool Allow Clipping; 
	UPROPERTY(BlueprintReadWrite) float Max Distance; 
	UPROPERTY(BlueprintReadWrite) TArray<enum class EObjectTypeQuery> Object Types; 
	UPROPERTY(BlueprintReadWrite) float Distance Cap; 

	UFUNCTION(BlueprintCallable) void Increment Camera Distance(float Delta Distance);
	UFUNCTION(BlueprintCallable) void ReceiveTick(float DeltaSeconds);
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_025_SpectatorCam(int32_t EntryPoint);
};

