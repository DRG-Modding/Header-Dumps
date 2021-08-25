// BlueprintGeneratedClass ENE_CaveLeech.ENE_CaveLeech_C
// Size: 0x498 (Inherited: 0x3f0)
struct AENE_CaveLeech_C : ACaveLeech {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3f0(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x3f8(0x08)
	struct UParticleSystemComponent* ParticleSystem; // 0x400(0x08)
	struct USceneComponent* RetractSpot; // 0x408(0x08)
	struct UAudioComponent* HeadAudio; // 0x410(0x08)
	struct UPointLightComponent* PointLight; // 0x418(0x08)
	struct UOutlineComponent* outline; // 0x420(0x08)
	struct USphereComponent* HitCollider; // 0x428(0x08)
	struct UTerrainPlacementComponent* terrainPlacement; // 0x430(0x08)
	struct USphereComponent* HeadCollision; // 0x438(0x08)
	struct USkeletalMeshComponent* TopMesh; // 0x440(0x08)
	struct USceneComponent* Mouth; // 0x448(0x08)
	float Light_on_Light_value_5D62893F4543BADC6EB650BB2288E402; // 0x450(0x04)
	char Light_on__Direction_5D62893F4543BADC6EB650BB2288E402; // 0x454(0x01)
	char UnknownData_455[0x3]; // 0x455(0x03)
	struct UTimelineComponent* Light_on; // 0x458(0x08)
	float Light_off_Light_value_FB1F6FB448F184C53818E18AA6CA6E7E; // 0x460(0x04)
	char Light_off__Direction_FB1F6FB448F184C53818E18AA6CA6E7E; // 0x464(0x01)
	char UnknownData_465[0x3]; // 0x465(0x03)
	struct UTimelineComponent* Light_off; // 0x468(0x08)
	float Emissive_on_Glow_value_8FD7DFD6484E2EAF8A2D1D97C4E37F6E; // 0x470(0x04)
	char Emissive_on__Direction_8FD7DFD6484E2EAF8A2D1D97C4E37F6E; // 0x474(0x01)
	char UnknownData_475[0x3]; // 0x475(0x03)
	struct UTimelineComponent* Emissive_on; // 0x478(0x08)
	float Emissive_off_Glow_value_E8DBA0094826FB48DB3D0A9B7129C074; // 0x480(0x04)
	char Emissive_off__Direction_E8DBA0094826FB48DB3D0A9B7129C074; // 0x484(0x01)
	char UnknownData_485[0x3]; // 0x485(0x03)
	struct UTimelineComponent* Emissive_off; // 0x488(0x08)
	struct UMaterialInstance* Emission ; // 0x490(0x08)

	struct USkeletalMeshComponent* GetMesh(); // Function ENE_CaveLeech.ENE_CaveLeech_C.GetMesh
	struct FVector GetTargetCenterMass(); // Function ENE_CaveLeech.ENE_CaveLeech_C.GetTargetCenterMass
	void PlayAudioHead(struct USoundBase* NewSound); // Function ENE_CaveLeech.ENE_CaveLeech_C.PlayAudioHead
	struct FVector GetMouthLocation(); // Function ENE_CaveLeech.ENE_CaveLeech_C.GetMouthLocation
	void UserConstructionScript(); // Function ENE_CaveLeech.ENE_CaveLeech_C.UserConstructionScript
	void Emissive_on__FinishedFunc(); // Function ENE_CaveLeech.ENE_CaveLeech_C.Emissive_on__FinishedFunc
	void Emissive_on__UpdateFunc(); // Function ENE_CaveLeech.ENE_CaveLeech_C.Emissive_on__UpdateFunc
	void Emissive_off__FinishedFunc(); // Function ENE_CaveLeech.ENE_CaveLeech_C.Emissive_off__FinishedFunc
	void Emissive_off__UpdateFunc(); // Function ENE_CaveLeech.ENE_CaveLeech_C.Emissive_off__UpdateFunc
	void Light_off__FinishedFunc(); // Function ENE_CaveLeech.ENE_CaveLeech_C.Light_off__FinishedFunc
	void Light_off__UpdateFunc(); // Function ENE_CaveLeech.ENE_CaveLeech_C.Light_off__UpdateFunc
	void Light_on__FinishedFunc(); // Function ENE_CaveLeech.ENE_CaveLeech_C.Light_on__FinishedFunc
	void Light_on__UpdateFunc(); // Function ENE_CaveLeech.ENE_CaveLeech_C.Light_on__UpdateFunc
	void BP_OnBite(struct UHealthComponent* TargetHealth); // Function ENE_CaveLeech.ENE_CaveLeech_C.BP_OnBite
	void ReceiveBeginPlay(); // Function ENE_CaveLeech.ENE_CaveLeech_C.ReceiveBeginPlay
	void BP_OnStateChanged(enum class ECaveLeechState NewState); // Function ENE_CaveLeech.ENE_CaveLeech_C.BP_OnStateChanged
	void ShowHead(bool bNewVisibility); // Function ENE_CaveLeech.ENE_CaveLeech_C.ShowHead
	void OnDeath(); // Function ENE_CaveLeech.ENE_CaveLeech_C.OnDeath
	void OnFrozen(struct AActor* Source); // Function ENE_CaveLeech.ENE_CaveLeech_C.OnFrozen
	void OnUnFrozen(); // Function ENE_CaveLeech.ENE_CaveLeech_C.OnUnFrozen
	void ExecuteUbergraph_ENE_CaveLeech(int32_t EntryPoint); // Function ENE_CaveLeech.ENE_CaveLeech_C.ExecuteUbergraph_ENE_CaveLeech
};

