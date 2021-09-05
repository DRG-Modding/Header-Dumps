// BlueprintGeneratedClass BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C
// Size: 0x415 (Inherited: 0x270)
struct ABP_SpaceRig_Bartender_C : ASpaceRigBar {
	FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	USkeletalMeshComponent* Hat_Xmas; // 0x278(0x08)
	USkeletalMeshComponent* Hat_Halloween_Witch; // 0x280(0x08)
	UStaticMeshComponent* Mesh_Menu; // 0x288(0x08)
	UWidgetComponent* Widget_Menu; // 0x290(0x08)
	UBillboardComponent* Cable3End; // 0x298(0x08)
	UBillboardComponent* Cable2End; // 0x2a0(0x08)
	UBillboardComponent* Cable1End; // 0x2a8(0x08)
	UParticleSystemComponent* SupporterParticleSystem; // 0x2b0(0x08)
	UStaticMeshComponent* SM_XmasCapStandalone; // 0x2b8(0x08)
	UStaticMeshComponent* Cube1; // 0x2c0(0x08)
	UWidgetComponent* AbyssBarSign_widget; // 0x2c8(0x08)
	UCableComponent* Cable2; // 0x2d0(0x08)
	UCableComponent* Cable1; // 0x2d8(0x08)
	UCableComponent* Cable3; // 0x2e0(0x08)
	UBoxComponent* Box; // 0x2e8(0x08)
	UBoxComponent* GreetColliderBox; // 0x2f0(0x08)
	USkeletalMeshComponent* BartenderMesh; // 0x2f8(0x08)
	USceneComponent* BartenderRotator; // 0x300(0x08)
	float LerpTimeline_NewTrack_0_6C29CBCD4E3E9F9E0BF33ABFD7C7E018; // 0x308(0x04)
	enum class ETimelineDirection LerpTimeline__Direction_6C29CBCD4E3E9F9E0BF33ABFD7C7E018; // 0x30c(0x01)
	UTimelineComponent* LerpTimeline; // 0x310(0x08)
	float FinishedTimeline_Time_B53F699A4A357873471E8CB3303A6A82; // 0x318(0x04)
	enum class ETimelineDirection FinishedTimeline__Direction_B53F699A4A357873471E8CB3303A6A82; // 0x31c(0x01)
	UTimelineComponent* FinishedTimeline; // 0x320(0x08)
	AFSDPlayerState* CurrentCustomerState; // 0x328(0x08)
	UMaterialInterface* MaterialWithCustomer; // 0x330(0x08)
	UMaterialInterface* MaterialWillNotServe; // 0x338(0x08)
	UMaterialInterface* MaterialCanServe; // 0x340(0x08)
	TArray<ABP_DrinksBox_C*> DrinkBoxes; // 0x348(0x10)
	UDrinkableDataAsset* CurrentDrinkable; // 0x358(0x08)
	int32_t DrinksSpawned; // 0x360(0x04)
	FTransform StartTransform; // 0x370(0x30)
	FTransform TargetTransform; // 0x3a0(0x30)
	FTransform SourceTransform; // 0x3d0(0x30)
	bool MixerCanSpawn; // 0x400(0x01)
	int32_t MixerDarkMorkiteTime; // 0x404(0x04)
	int32_t MixerRedRockTime; // 0x408(0x04)
	int32_t MixerGlyphidSlammerTime; // 0x40c(0x04)
	int32_t MixerLeafloversTime; // 0x410(0x04)
	bool IsPouring; // 0x414(0x01)

	void SetCableAnchors();
	void PayCredits(APlayerCharacter* User, int32_t amount, bool Purchased);
	void Spawn Mixer Beer(FString ControlEventID, int32_t MixerCooldownToSet, UDrinkableDataAsset* OrderedDrink, FString Ordering Player, FText Announcement Text);
	void PlayGreeting(float Duration);
	void PlayAnim(UAnimMontage* MontageToPlay, float Duration);
	void PlayNegative(float Duration);
	void PlayAffirmative(float Duration);
	void PourFinished();
	void Pour(ABP_DrinksBox_C* DrinkBox, float PourDuration);
	void SetBartenderLightMaterial(UMaterialInterface* SourceMaterial);
	void OnRep_CurrentCustomerState();
	void SetCustomer(APlayerCharacter* Customer);
	void CanOrderNewRound(bool CanOrder);
	void UserConstructionScript();
	void LerpTimeline__FinishedFunc();
	void LerpTimeline__UpdateFunc();
	void FinishedTimeline__FinishedFunc();
	void FinishedTimeline__UpdateFunc();
	void BndEvt__BarUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(APlayerCharacter* User);
	void ReceiveBeginPlay();
	void BndEvt__BarUsable_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature(bool canUse);
	void LookAtCustomer(APlayerCharacter* Customer);
	void OnPlayerLeave_Event(AFSDPlayerState* PlayerState);
	void Update Bartender Lights();
	void SpawnDrinks(UDrinkableDataAsset* Drinable);
	void Lerp To(FTransform PourTransform, float Duration);
	void Server Spawn Next Drink();
	void OnAvailableForNewDrink_Event(ABP_DrinksBox_C* DrinkBox);
	void OnDrinkReady_Event(ABP_DrinksBox_C* DrinkBox);
	void Return To Idle();
	void All_BeginSpawnDrinks(bool PlayFireworks);
	void Client Spawn Next Drink(ABP_DrinksBox_C* DrinkBox);
	void BndEvt__GreetColliderBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	void Look Towards(AActor* Actor, float Duration);
	void Init Background Menu();
	void Toggle Fireworks(bool Enabled);
	void InitializeMixer();
	void OnUsableChanged_Mixer(bool canUse);
	void PlayBartenderTip(APlayerCharacter* User);
	void ExecuteUbergraph_BP_SpaceRig_Bartender(int32_t EntryPoint);
};

