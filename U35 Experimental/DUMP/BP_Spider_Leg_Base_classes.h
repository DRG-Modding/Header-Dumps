// BlueprintGeneratedClass BP_Spider_Leg_Base.BP_Spider_Leg_Base_C
// Size: 0x248 (Inherited: 0x220)
struct ABP_Spider_Leg_Base_C : AActor {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) USimpleObjectInfoComponent* SimpleObjectInfo; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* Mesh; 
	UPROPERTY(BlueprintReadWrite) UBoxComponent* Box; 
	UPROPERTY(BlueprintReadWrite) USceneComponent* DefaultSceneRoot; 

	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_Spider_Leg_Base(int32_t EntryPoint);
};

