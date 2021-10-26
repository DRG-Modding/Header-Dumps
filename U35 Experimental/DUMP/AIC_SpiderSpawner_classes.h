// BlueprintGeneratedClass AIC_SpiderSpawner.AIC_SpiderSpawner_C
// Size: 0x360 (Inherited: 0x358)
struct AAIC_SpiderSpawner_C : AFSDAIController {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 

	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_AIC_SpiderSpawner(int32_t EntryPoint);
};

