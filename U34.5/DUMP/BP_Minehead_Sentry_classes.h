// BlueprintGeneratedClass BP_Minehead_Sentry.BP_Minehead_Sentry_C
// Size: 0x494 (Inherited: 0x400)
struct ABP_Minehead_Sentry_C : ASentryGun {
	FPointerToUberGraphFrame UberGraphFrame; // 0x400(0x08)
	UPathfinderCollisionComponent* PathfinderCollision; // 0x408(0x08)
	UCapsuleComponent* Capsule; // 0x410(0x08)
	UParticleSystemComponent* P_SentryGun_MineHead_Casing; // 0x418(0x08)
	USceneComponent* SpotLightBase; // 0x420(0x08)
	UStaticMeshComponent* LightCone; // 0x428(0x08)
	UPointLightComponent* PointLight; // 0x430(0x08)
	USpotLightComponent* SpotLight; // 0x438(0x08)
	UWidgetComponent* AmmoCountWidget; // 0x440(0x08)
	UDamageComponent* Damage1; // 0x448(0x08)
	USimpleObjectInfoComponent* SimpleObjectInfo; // 0x450(0x08)
	UHitscanComponent* HitScan; // 0x458(0x08)
	float Undeploy_Progress_02B4B0BE41996CA1C5785D8CDFE1AD49; // 0x460(0x04)
	enum class ETimelineDirection Undeploy__Direction_02B4B0BE41996CA1C5785D8CDFE1AD49; // 0x464(0x01)
	UTimelineComponent* Undeploy; // 0x468(0x08)
	float DeployTimeline_DeployProgress_4362678842D8358C48C38287DF4595DA; // 0x470(0x04)
	enum class ETimelineDirection DeployTimeline__Direction_4362678842D8358C48C38287DF4595DA; // 0x474(0x01)
	UTimelineComponent* DeployTimeline; // 0x478(0x08)
	float FoldoutAnimDuration; // 0x480(0x04)
	float Old Z Angle; // 0x484(0x04)
	float Old Z Direction; // 0x488(0x04)
	bool IsDeployed; // 0x48c(0x01)
	float DeployProgress; // 0x490(0x04)

	float GetDeployProgress();
	void ConditionallyEnableShadows();
	void OnRep_IsDeployed();
	void SignOrZero(float Value, float Sign);
	void DeployTimeline__FinishedFunc();
	void DeployTimeline__UpdateFunc();
	void Undeploy__FinishedFunc();
	void Undeploy__UpdateFunc();
	void AmmoSpent();
	void ReceiveBeginPlay();
	void Sentry Gun Ready();
	void Deploy();
	void UpdateShadows();
	void BndEvt__Hitscan_K2Node_ComponentBoundEvent_0_WeaponFiredDelegate__DelegateSignature(FVector Location);
	void ExecuteUbergraph_BP_Minehead_Sentry(int32_t EntryPoint);
};

