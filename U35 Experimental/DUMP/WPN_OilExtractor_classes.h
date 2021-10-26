// BlueprintGeneratedClass WPN_OilExtractor.WPN_OilExtractor_C
// Size: 0x5c8 (Inherited: 0x560)
struct AWPN_OilExtractor_C : AWPN_Extractor_C {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UAudioComponent* OilExtractorHitPositive; 
	UPROPERTY(BlueprintReadWrite) UAudioComponent* OilExtractorHitNegative; 
	UPROPERTY(BlueprintReadWrite) UWidgetComponent* Widget_OilReadoutBottom_Ground; 
	UPROPERTY(BlueprintReadWrite) UWidgetComponent* Widget_OilReadoutTop_Ground; 
	UPROPERTY(BlueprintReadWrite) UWidgetComponent* Widget_OilReadoutBottom_TP; 
	UPROPERTY(BlueprintReadWrite) UWidgetComponent* Widget_OilReadoutTop_TP; 
	UPROPERTY(BlueprintReadWrite) UFirstPersonWidgetComponent* Widget_OilReadoutBottom; 
	UPROPERTY(BlueprintReadWrite) UFirstPersonWidgetComponent* Widget_OilReadoutTop; 
	UPROPERTY(BlueprintReadWrite) USimpleObjectInfoComponent* SimpleObjectInfo; 
	UPROPERTY(BlueprintReadWrite) UActorTrackingComponent* ActorTracking; 
	UPROPERTY(BlueprintReadWrite) USoundCue* ImpactSound; 
	UPROPERTY(BlueprintReadWrite) UMaterialInstanceDynamic* FuelbarMat; 

	UFUNCTION(BlueprintCallable) void SetFilledUI(UWidgetComponent* Widget, float FilledAmount);
	UFUNCTION(BlueprintCallable) void OnCurrentLoadChanged(float Load);
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void RecieveEquipped();
	UFUNCTION(BlueprintCallable) void RecieveUnequipped();
	UFUNCTION(BlueprintCallable) void ReceiveTick(float DeltaSeconds);
	UFUNCTION(BlueprintCallable) void BndEvt__DroppedCollider_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, FHitResult Hit);
	UFUNCTION(BlueprintCallable) void OnValidSurfaceChanged(bool IsValid);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_WPN_OilExtractor(int32_t EntryPoint);
};

