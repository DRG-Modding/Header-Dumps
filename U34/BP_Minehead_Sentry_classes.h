// BlueprintGeneratedClass BP_Minehead_Sentry.BP_Minehead_Sentry_C
// Size: 0x494 (Inherited: 0x400)
struct ABP_Minehead_Sentry_C : ASentryGun {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x400(0x08)
	struct UPathfinderCollisionComponent* PathfinderCollision; // 0x408(0x08)
	struct UCapsuleComponent* Capsule; // 0x410(0x08)
	struct UParticleSystemComponent* P_SentryGun_MineHead_Casing; // 0x418(0x08)
	struct USceneComponent* SpotlightBase; // 0x420(0x08)
	struct UStaticMeshComponent* LightCone; // 0x428(0x08)
	struct UPointLightComponent* PointLight; // 0x430(0x08)
	struct USpotLightComponent* SpotLight; // 0x438(0x08)
	struct UWidgetComponent* AmmoCountWidget; // 0x440(0x08)
	struct UDamageComponent* Damage1; // 0x448(0x08)
	struct USimpleObjectInfoComponent* SimpleObjectInfo; // 0x450(0x08)
	struct UHitscanComponent* HitScan; // 0x458(0x08)
	float Undeploy_Progress_02B4B0BE41996CA1C5785D8CDFE1AD49; // 0x460(0x04)
	char Undeploy__Direction_02B4B0BE41996CA1C5785D8CDFE1AD49; // 0x464(0x01)
	char UnknownData_465[0x3]; // 0x465(0x03)
	struct UTimelineComponent* Undeploy; // 0x468(0x08)
	float DeployTimeline_DeployProgress_4362678842D8358C48C38287DF4595DA; // 0x470(0x04)
	char DeployTimeline__Direction_4362678842D8358C48C38287DF4595DA; // 0x474(0x01)
	char UnknownData_475[0x3]; // 0x475(0x03)
	struct UTimelineComponent* DeployTimeline; // 0x478(0x08)
	float FoldoutAnimDuration; // 0x480(0x04)
	float Old Z Angle; // 0x484(0x04)
	float Old Z Direction; // 0x488(0x04)
	bool IsDeployed; // 0x48c(0x01)
	char UnknownData_48D[0x3]; // 0x48d(0x03)
	float DeployProgress; // 0x490(0x04)

	float GetDeployProgress(); // Function BP_Minehead_Sentry.BP_Minehead_Sentry_C.GetDeployProgress
	void ConditionallyEnableShadows(); // Function BP_Minehead_Sentry.BP_Minehead_Sentry_C.ConditionallyEnableShadows
	void OnRep_IsDeployed(); // Function BP_Minehead_Sentry.BP_Minehead_Sentry_C.OnRep_IsDeployed
	void SignOrZero(float Value, float Sign); // Function BP_Minehead_Sentry.BP_Minehead_Sentry_C.SignOrZero
	void DeployTimeline__FinishedFunc(); // Function BP_Minehead_Sentry.BP_Minehead_Sentry_C.DeployTimeline__FinishedFunc
	void DeployTimeline__UpdateFunc(); // Function BP_Minehead_Sentry.BP_Minehead_Sentry_C.DeployTimeline__UpdateFunc
	void Undeploy__FinishedFunc(); // Function BP_Minehead_Sentry.BP_Minehead_Sentry_C.Undeploy__FinishedFunc
	void Undeploy__UpdateFunc(); // Function BP_Minehead_Sentry.BP_Minehead_Sentry_C.Undeploy__UpdateFunc
	void AmmoSpent(); // Function BP_Minehead_Sentry.BP_Minehead_Sentry_C.AmmoSpent
	void ReceiveBeginPlay(); // Function BP_Minehead_Sentry.BP_Minehead_Sentry_C.ReceiveBeginPlay
	void Sentry Gun Ready(); // Function BP_Minehead_Sentry.BP_Minehead_Sentry_C.Sentry Gun Ready
	void Deploy(); // Function BP_Minehead_Sentry.BP_Minehead_Sentry_C.Deploy
	void UpdateShadows(); // Function BP_Minehead_Sentry.BP_Minehead_Sentry_C.UpdateShadows
	void BndEvt__Hitscan_K2Node_ComponentBoundEvent_0_WeaponFiredDelegate__DelegateSignature(struct FVector Location); // Function BP_Minehead_Sentry.BP_Minehead_Sentry_C.BndEvt__Hitscan_K2Node_ComponentBoundEvent_0_WeaponFiredDelegate__DelegateSignature
	void ExecuteUbergraph_BP_Minehead_Sentry(int32_t EntryPoint); // Function BP_Minehead_Sentry.BP_Minehead_Sentry_C.ExecuteUbergraph_BP_Minehead_Sentry
};

