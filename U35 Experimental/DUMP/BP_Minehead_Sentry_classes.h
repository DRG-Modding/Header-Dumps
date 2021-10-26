// BlueprintGeneratedClass BP_Minehead_Sentry.BP_Minehead_Sentry_C
// Size: 0x494 (Inherited: 0x400)
struct ABP_Minehead_Sentry_C : ASentryGun {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UPathfinderCollisionComponent* PathfinderCollision; 
	UPROPERTY(BlueprintReadWrite) UCapsuleComponent* Capsule; 
	UPROPERTY(BlueprintReadWrite) UParticleSystemComponent* P_SentryGun_MineHead_Casing; 
	UPROPERTY(BlueprintReadWrite) USceneComponent* SpotLightBase; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* LightCone; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight; 
	UPROPERTY(BlueprintReadWrite) USpotLightComponent* SpotLight; 
	UPROPERTY(BlueprintReadWrite) UWidgetComponent* AmmoCountWidget; 
	UPROPERTY(BlueprintReadWrite) UDamageComponent* Damage1; 
	UPROPERTY(BlueprintReadWrite) USimpleObjectInfoComponent* SimpleObjectInfo; 
	UPROPERTY(BlueprintReadWrite) UHitscanComponent* HitScan; 
	UPROPERTY(BlueprintReadWrite) float Undeploy_Progress_02B4B0BE41996CA1C5785D8CDFE1AD49; 
	UPROPERTY(BlueprintReadWrite) enum class ETimelineDirection Undeploy__Direction_02B4B0BE41996CA1C5785D8CDFE1AD49; 
	UPROPERTY(BlueprintReadWrite) UTimelineComponent* Undeploy; 
	UPROPERTY(BlueprintReadWrite) float DeployTimeline_DeployProgress_4362678842D8358C48C38287DF4595DA; 
	UPROPERTY(BlueprintReadWrite) enum class ETimelineDirection DeployTimeline__Direction_4362678842D8358C48C38287DF4595DA; 
	UPROPERTY(BlueprintReadWrite) UTimelineComponent* DeployTimeline; 
	UPROPERTY(BlueprintReadWrite) float FoldoutAnimDuration; 
	UPROPERTY(BlueprintReadWrite) float Old Z Angle; 
	UPROPERTY(BlueprintReadWrite) float Old Z Direction; 
	UPROPERTY(BlueprintReadWrite) bool IsDeployed; 
	UPROPERTY(BlueprintReadWrite) float DeployProgress; 

	UFUNCTION(BlueprintCallable) float GetDeployProgress();
	UFUNCTION(BlueprintCallable) void ConditionallyEnableShadows();
	UFUNCTION(BlueprintCallable) void OnRep_IsDeployed();
	UFUNCTION(BlueprintCallable) void SignOrZero(float Value, float Sign);
	UFUNCTION(BlueprintCallable) void DeployTimeline__FinishedFunc();
	UFUNCTION(BlueprintCallable) void DeployTimeline__UpdateFunc();
	UFUNCTION(BlueprintCallable) void Undeploy__FinishedFunc();
	UFUNCTION(BlueprintCallable) void Undeploy__UpdateFunc();
	UFUNCTION(BlueprintCallable) void AmmoSpent();
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void Sentry Gun Ready();
	UFUNCTION(BlueprintCallable) void Deploy();
	UFUNCTION(BlueprintCallable) void UpdateShadows();
	UFUNCTION(BlueprintCallable) void BndEvt__Hitscan_K2Node_ComponentBoundEvent_0_WeaponFiredDelegate__DelegateSignature(FVector Location);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_Minehead_Sentry(int32_t EntryPoint);
};

