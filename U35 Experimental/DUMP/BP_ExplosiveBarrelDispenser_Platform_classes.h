// BlueprintGeneratedClass BP_ExplosiveBarrelDispenser_Platform.BP_ExplosiveBarrelDispenser_Platform_C
// Size: 0x34a (Inherited: 0x2b0)
struct ABP_ExplosiveBarrelDispenser_Platform_C : ARessuplyPod {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) USimpleObjectInfoComponent* SimpleObjectInfo; 
	UPROPERTY(BlueprintReadWrite) UDropToTerrainComponent* DropToTerrain; 
	UPROPERTY(BlueprintReadWrite) UTerrainDetectComponent* TerrainDetect; 
	UPROPERTY(BlueprintReadWrite) UWidgetComponent* Widget; 
	UPROPERTY(BlueprintReadWrite) UOutlineComponent* outline; 
	UPROPERTY(BlueprintReadWrite) UTerrainPlacementComponent* TerrainPlacement1; 
	UPROPERTY(BlueprintReadWrite) UChildActorComponent* RightDispenser; 
	UPROPERTY(BlueprintReadWrite) UChildActorComponent* BackDispenser; 
	UPROPERTY(BlueprintReadWrite) UChildActorComponent* LeftDispenser; 
	UPROPERTY(BlueprintReadWrite) UChildActorComponent* ForwardDispenser; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight; 
	UPROPERTY(BlueprintReadWrite) UCapsuleComponent* Capsule; 
	UPROPERTY(BlueprintReadWrite) USkeletalMeshComponent* Drill; 
	UPROPERTY(BlueprintReadWrite) UAutoCarverComponent* AutoCarver; 
	UPROPERTY(BlueprintReadWrite) USkeletalMeshComponent* Base; 
	UPROPERTY(BlueprintReadWrite) AGameEvent* OwningEvent; 
	UPROPERTY(BlueprintReadWrite) float OutlineTime; 
	UPROPERTY(BlueprintReadWrite) FTimerHandle ResizeCarverTimer; 
	UPROPERTY(BlueprintReadWrite) bool ChildrenActive; 
	UPROPERTY(BlueprintReadWrite) bool ActivateOnLanding; 

	UFUNCTION(BlueprintCallable) bool AddEventProgress(float Progress);
	UFUNCTION(BlueprintCallable) bool AdvanceOneObjective();
	UFUNCTION(BlueprintCallable) bool SetupEvent(AGameEvent* GameEvent);
	UFUNCTION(BlueprintCallable) void OnRep_ChildrenActive();
	UFUNCTION(BlueprintCallable) void SetChildrenReady(bool IsReady);
	UFUNCTION(BlueprintCallable) void OnEventOpened();
	UFUNCTION(BlueprintCallable) void OnEventProgress(float Progress);
	UFUNCTION(BlueprintCallable) void OnEventTriggered();
	UFUNCTION(BlueprintCallable) void OnDropStarted();
	UFUNCTION(BlueprintCallable) void OnDroppodImpact();
	UFUNCTION(BlueprintCallable) void DeployAnimations();
	UFUNCTION(BlueprintCallable) void OnEventFinished(bool eventSuccess);
	UFUNCTION(BlueprintCallable) void ManageOutLines();
	UFUNCTION(BlueprintCallable) void OnDroppodCloseToImpact();
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void ResizeCarver();
	UFUNCTION(BlueprintCallable) void BndEvt__DropToTerrain_K2Node_ComponentBoundEvent_0_OnIsFallingToTerrainChanged__DelegateSignature(bool IsFalling);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_ExplosiveBarrelDispenser_Platform(int32_t EntryPoint);
};

