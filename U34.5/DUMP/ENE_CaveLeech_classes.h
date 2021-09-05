// BlueprintGeneratedClass ENE_CaveLeech.ENE_CaveLeech_C
// Size: 0x498 (Inherited: 0x3f0)
struct AENE_CaveLeech_C : ACaveLeech {
	FPointerToUberGraphFrame UberGraphFrame; // 0x3f0(0x08)
	UStaticMeshComponent* StaticMesh; // 0x3f8(0x08)
	UParticleSystemComponent* ParticleSystem; // 0x400(0x08)
	USceneComponent* RetractSpot; // 0x408(0x08)
	UAudioComponent* HeadAudio; // 0x410(0x08)
	UPointLightComponent* PointLight; // 0x418(0x08)
	UOutlineComponent* outline; // 0x420(0x08)
	USphereComponent* HitCollider; // 0x428(0x08)
	UTerrainPlacementComponent* terrainPlacement; // 0x430(0x08)
	USphereComponent* HeadCollision; // 0x438(0x08)
	USkeletalMeshComponent* TopMesh; // 0x440(0x08)
	USceneComponent* Mouth; // 0x448(0x08)
	float Light_on_Light_value_5D62893F4543BADC6EB650BB2288E402; // 0x450(0x04)
	enum class ETimelineDirection Light_on__Direction_5D62893F4543BADC6EB650BB2288E402; // 0x454(0x01)
	UTimelineComponent* Light_on; // 0x458(0x08)
	float Light_off_Light_value_FB1F6FB448F184C53818E18AA6CA6E7E; // 0x460(0x04)
	enum class ETimelineDirection Light_off__Direction_FB1F6FB448F184C53818E18AA6CA6E7E; // 0x464(0x01)
	UTimelineComponent* Light_off; // 0x468(0x08)
	float Emissive_on_Glow_value_8FD7DFD6484E2EAF8A2D1D97C4E37F6E; // 0x470(0x04)
	enum class ETimelineDirection Emissive_on__Direction_8FD7DFD6484E2EAF8A2D1D97C4E37F6E; // 0x474(0x01)
	UTimelineComponent* Emissive_on; // 0x478(0x08)
	float Emissive_off_Glow_value_E8DBA0094826FB48DB3D0A9B7129C074; // 0x480(0x04)
	enum class ETimelineDirection Emissive_off__Direction_E8DBA0094826FB48DB3D0A9B7129C074; // 0x484(0x01)
	UTimelineComponent* Emissive_off; // 0x488(0x08)
	UMaterialInstance* Emission ; // 0x490(0x08)

	USkeletalMeshComponent* GetMesh();
	FVector GetTargetCenterMass();
	void PlayAudioHead(USoundBase* NewSound);
	FVector GetMouthLocation();
	void UserConstructionScript();
	void Emissive_on__FinishedFunc();
	void Emissive_on__UpdateFunc();
	void Emissive_off__FinishedFunc();
	void Emissive_off__UpdateFunc();
	void Light_off__FinishedFunc();
	void Light_off__UpdateFunc();
	void Light_on__FinishedFunc();
	void Light_on__UpdateFunc();
	void BP_OnBite(UHealthComponent* TargetHealth);
	void ReceiveBeginPlay();
	void BP_OnStateChanged(enum class ECaveLeechState NewState);
	void ShowHead(bool bNewVisibility);
	void OnDeath();
	void OnFrozen(AActor* Source);
	void OnUnFrozen();
	void ExecuteUbergraph_ENE_CaveLeech(int32_t EntryPoint);
};

