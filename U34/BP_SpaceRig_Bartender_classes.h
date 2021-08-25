// BlueprintGeneratedClass BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C
// Size: 0x415 (Inherited: 0x270)
struct ABP_SpaceRig_Bartender_C : ASpaceRigBar {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct USkeletalMeshComponent* Hat_Xmas; // 0x278(0x08)
	struct USkeletalMeshComponent* Hat_Halloween_Witch; // 0x280(0x08)
	struct UStaticMeshComponent* Mesh_Menu; // 0x288(0x08)
	struct UWidgetComponent* Widget_Menu; // 0x290(0x08)
	struct UBillboardComponent* Cable3End; // 0x298(0x08)
	struct UBillboardComponent* Cable2End; // 0x2a0(0x08)
	struct UBillboardComponent* Cable1End; // 0x2a8(0x08)
	struct UParticleSystemComponent* SupporterParticleSystem; // 0x2b0(0x08)
	struct UStaticMeshComponent* SM_XmasCapStandalone; // 0x2b8(0x08)
	struct UStaticMeshComponent* Cube1; // 0x2c0(0x08)
	struct UWidgetComponent* AbyssBarSign_widget; // 0x2c8(0x08)
	struct UCableComponent* Cable2; // 0x2d0(0x08)
	struct UCableComponent* Cable1; // 0x2d8(0x08)
	struct UCableComponent* Cable3; // 0x2e0(0x08)
	struct UBoxComponent* Box; // 0x2e8(0x08)
	struct UBoxComponent* GreetColliderBox; // 0x2f0(0x08)
	struct USkeletalMeshComponent* BartenderMesh; // 0x2f8(0x08)
	struct USceneComponent* BartenderRotator; // 0x300(0x08)
	float LerpTimeline_NewTrack_0_6C29CBCD4E3E9F9E0BF33ABFD7C7E018; // 0x308(0x04)
	char LerpTimeline__Direction_6C29CBCD4E3E9F9E0BF33ABFD7C7E018; // 0x30c(0x01)
	char UnknownData_30D[0x3]; // 0x30d(0x03)
	struct UTimelineComponent* LerpTimeline; // 0x310(0x08)
	float FinishedTimeline_Time_B53F699A4A357873471E8CB3303A6A82; // 0x318(0x04)
	char FinishedTimeline__Direction_B53F699A4A357873471E8CB3303A6A82; // 0x31c(0x01)
	char UnknownData_31D[0x3]; // 0x31d(0x03)
	struct UTimelineComponent* FinishedTimeline; // 0x320(0x08)
	struct AFSDPlayerState* CurrentCustomerState; // 0x328(0x08)
	struct UMaterialInterface* MaterialWithCustomer; // 0x330(0x08)
	struct UMaterialInterface* MaterialWillNotServe; // 0x338(0x08)
	struct UMaterialInterface* MaterialCanServe; // 0x340(0x08)
	struct TArray<struct ABP_DrinksBox_C*> DrinkBoxes; // 0x348(0x10)
	struct UDrinkableDataAsset* CurrentDrinkable; // 0x358(0x08)
	int32_t DrinksSpawned; // 0x360(0x04)
	char UnknownData_364[0xc]; // 0x364(0x0c)
	struct FTransform StartTransform; // 0x370(0x30)
	struct FTransform TargetTransform; // 0x3a0(0x30)
	struct FTransform SourceTransform; // 0x3d0(0x30)
	bool MixerCanSpawn; // 0x400(0x01)
	char UnknownData_401[0x3]; // 0x401(0x03)
	int32_t MixerDarkMorkiteTime; // 0x404(0x04)
	int32_t MixerRedRockTime; // 0x408(0x04)
	int32_t MixerGlyphidSlammerTime; // 0x40c(0x04)
	int32_t MixerLeafloversTime; // 0x410(0x04)
	bool IsPouring; // 0x414(0x01)

	void SetCableAnchors(); // Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.SetCableAnchors
	void PayCredits(struct APlayerCharacter* User, int32_t amount, bool Purchased); // Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.PayCredits
	void Spawn Mixer Beer(struct FString ControlEventID, int32_t MixerCooldownToSet, struct UDrinkableDataAsset* OrderedDrink, struct FString Ordering Player, struct FText Announcement Text); // Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.Spawn Mixer Beer
	void PlayGreeting(float Duration); // Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.PlayGreeting
	void PlayAnim(struct UAnimMontage* MontageToPlay, float Duration); // Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.PlayAnim
	void PlayNegative(float Duration); // Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.PlayNegative
	void PlayAffirmative(float Duration); // Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.PlayAffirmative
	void PourFinished(); // Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.PourFinished
	void Pour(struct ABP_DrinksBox_C* DrinkBox, float PourDuration); // Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.Pour
	void SetBartenderLightMaterial(struct UMaterialInterface* SourceMaterial); // Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.SetBartenderLightMaterial
	void OnRep_CurrentCustomerState(); // Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.OnRep_CurrentCustomerState
	void SetCustomer(struct APlayerCharacter* Customer); // Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.SetCustomer
	void CanOrderNewRound(bool CanOrder); // Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.CanOrderNewRound
	void UserConstructionScript(); // Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.UserConstructionScript
	void LerpTimeline__FinishedFunc(); // Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.LerpTimeline__FinishedFunc
	void LerpTimeline__UpdateFunc(); // Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.LerpTimeline__UpdateFunc
	void FinishedTimeline__FinishedFunc(); // Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.FinishedTimeline__FinishedFunc
	void FinishedTimeline__UpdateFunc(); // Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.FinishedTimeline__UpdateFunc
	void BndEvt__BarUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(struct APlayerCharacter* User); // Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.BndEvt__BarUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature
	void ReceiveBeginPlay(); // Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.ReceiveBeginPlay
	void BndEvt__BarUsable_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature(bool canUse); // Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.BndEvt__BarUsable_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature
	void LookAtCustomer(struct APlayerCharacter* Customer); // Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.LookAtCustomer
	void OnPlayerLeave_Event(struct AFSDPlayerState* PlayerState); // Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.OnPlayerLeave_Event
	void Update Bartender Lights(); // Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.Update Bartender Lights
	void SpawnDrinks(struct UDrinkableDataAsset* Drinable); // Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.SpawnDrinks
	void Lerp To(struct FTransform PourTransform, float Duration); // Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.Lerp To
	void Server Spawn Next Drink(); // Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.Server Spawn Next Drink
	void OnAvailableForNewDrink_Event(struct ABP_DrinksBox_C* DrinkBox); // Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.OnAvailableForNewDrink_Event
	void OnDrinkReady_Event(struct ABP_DrinksBox_C* DrinkBox); // Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.OnDrinkReady_Event
	void Return To Idle(); // Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.Return To Idle
	void All_BeginSpawnDrinks(bool PlayFireworks); // Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.All_BeginSpawnDrinks
	void Client Spawn Next Drink(struct ABP_DrinksBox_C* DrinkBox); // Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.Client Spawn Next Drink
	void BndEvt__GreetColliderBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.BndEvt__GreetColliderBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	void Look Towards(struct AActor* Actor, float Duration); // Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.Look Towards
	void Init Background Menu(); // Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.Init Background Menu
	void Toggle Fireworks(bool Enabled); // Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.Toggle Fireworks
	void InitializeMixer(); // Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.InitializeMixer
	void OnUsableChanged_Mixer(bool canUse); // Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.OnUsableChanged_Mixer
	void PlayBartenderTip(struct APlayerCharacter* User); // Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.PlayBartenderTip
	void ExecuteUbergraph_BP_SpaceRig_Bartender(int32_t EntryPoint); // Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.ExecuteUbergraph_BP_SpaceRig_Bartender
};

