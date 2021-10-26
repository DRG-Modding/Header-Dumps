// BlueprintGeneratedClass BP_PumpkinFace_Item.BP_PumpkinFace_Item_C
// Size: 0x2a8 (Inherited: 0x279)
struct ABP_PumpkinFace_Item_C : ABP_Pumpkin_Item_C {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) USphereComponent* ProximityTrigger; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight; 
	UPROPERTY(BlueprintReadWrite) float Timeline_0_LightIntensity_7354DC9243CD117360DDC3823BE25B3E; 
	UPROPERTY(BlueprintReadWrite) enum class ETimelineDirection Timeline_0__Direction_7354DC9243CD117360DDC3823BE25B3E; 
	UPROPERTY(BlueprintReadWrite) UTimelineComponent* Timeline_1; 

	UFUNCTION(BlueprintCallable) void Timeline_0__FinishedFunc();
	UFUNCTION(BlueprintCallable) void Timeline_0__UpdateFunc();
	UFUNCTION(BlueprintCallable) void BndEvt__ProximityTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	UFUNCTION(BlueprintCallable) void BndEvt__ProximityTrigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_PumpkinFace_Item(int32_t EntryPoint);
};

