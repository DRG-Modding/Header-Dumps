#ifndef UE4SS_SDK_BP_SpaceRig_Bartender_HPP
#define UE4SS_SDK_BP_SpaceRig_Bartender_HPP

class ABP_SpaceRig_Bartender_C : public ASpaceRigBar
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USkeletalMeshComponent* Hat_Easter;
    class USkeletalMeshComponent* Hat_Anniversary;
    class USkeletalMeshComponent* SK_Moustache_Rig_A_003;
    class USkeletalMeshComponent* Hat_LunarFestival;
    class USkeletalMeshComponent* Hat_Oktoberfest;
    class USkeletalMeshComponent* Hat_BeachParty;
    class USkeletalMeshComponent* Hat_Xmas;
    class USkeletalMeshComponent* Hat_Halloween_Witch;
    class UStaticMeshComponent* Mesh_Menu;
    class UWidgetComponent* Widget_Menu;
    class UBillboardComponent* Cable3End;
    class UBillboardComponent* Cable2End;
    class UBillboardComponent* Cable1End;
    class UParticleSystemComponent* SupporterParticleSystem;
    class UStaticMeshComponent* SM_XmasCapStandalone;
    class UStaticMeshComponent* Cube1;
    class UWidgetComponent* AbyssBarSign_widget;
    class UCableComponent* Cable2;
    class UCableComponent* Cable1;
    class UCableComponent* Cable3;
    class UBoxComponent* Box;
    class UBoxComponent* GreetColliderBox;
    class USkeletalMeshComponent* BartenderMesh;
    class USceneComponent* BartenderRotator;
    float LerpTimeline_NewTrack_0_6C29CBCD4E3E9F9E0BF33ABFD7C7E018;
    TEnumAsByte<ETimelineDirection::Type> LerpTimeline__Direction_6C29CBCD4E3E9F9E0BF33ABFD7C7E018;
    class UTimelineComponent* LerpTimeline;
    float FinishedTimeline_Time_B53F699A4A357873471E8CB3303A6A82;
    TEnumAsByte<ETimelineDirection::Type> FinishedTimeline__Direction_B53F699A4A357873471E8CB3303A6A82;
    class UTimelineComponent* FinishedTimeline;
    class AFSDPlayerState* CurrentCustomerState;
    class UMaterialInterface* MaterialWithCustomer;
    class UMaterialInterface* MaterialWillNotServe;
    class UMaterialInterface* MaterialCanServe;
    TArray<class ABP_DrinksBox_C*> DrinkBoxes;
    class UDrinkableDataAsset* CurrentDrinkable;
    int32 DrinksSpawned;
    FTransform StartTransform;
    FTransform TargetTransform;
    FTransform SourceTransform;
    bool MixerCanSpawn;
    int32 MixerDarkMorkiteTime;
    int32 MixerRedRockTime;
    int32 MixerGlyphidSlammerTime;
    int32 MixerLeafloversTime;
    bool IsPouring;
    TMap<class EHolidayType, class USkeletalMeshComponent*> HolidayAssetMap;

    void UpdateHolidayDecoration();
    void SetCableAnchors();
    void PayCredits(class APlayerCharacter* User, int32 Amount, bool& Purchased);
    void Spawn Mixer Beer(FString ControlEventID, int32 MixerCooldownToSet, class UDrinkableDataAsset* OrderedDrink, FString Ordering Player, FText Announcement Text);
    void PlayGreeting(float& Duration);
    void PlayAnim(class UAnimMontage* MontageToPlay, float& Duration);
    void PlayNegative(float& Duration);
    void PlayAffirmative(float& Duration);
    void PourFinished();
    void Pour(class ABP_DrinksBox_C* DrinkBox, float& PourDuration);
    void SetBartenderLightMaterial(class UMaterialInterface* SourceMaterial);
    void OnRep_CurrentCustomerState();
    void SetCustomer(class APlayerCharacter* Customer);
    void CanOrderNewRound(bool& CanOrder);
    void UserConstructionScript();
    void LerpTimeline__FinishedFunc();
    void LerpTimeline__UpdateFunc();
    void FinishedTimeline__FinishedFunc();
    void FinishedTimeline__UpdateFunc();
    void BndEvt__BarUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void ReceiveBeginPlay();
    void BndEvt__BarUsable_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature(bool CanUse);
    void LookAtCustomer(class APlayerCharacter* Customer);
    void OnPlayerLeave_Event(class AFSDPlayerState* PlayerState);
    void Update Bartender Lights();
    void SpawnDrinks(class UDrinkableDataAsset* Drinable);
    void Lerp To(FTransform PourTransform, float Duration);
    void Server Spawn Next Drink();
    void OnAvailableForNewDrink_Event(class ABP_DrinksBox_C* DrinkBox);
    void OnDrinkReady_Event(class ABP_DrinksBox_C* DrinkBox);
    void Return To Idle();
    void All_BeginSpawnDrinks(bool PlayFireworks);
    void Client Spawn Next Drink(class ABP_DrinksBox_C* DrinkBox);
    void BndEvt__GreetColliderBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void Look Towards(class AActor* Actor, float Duration);
    void Init Background Menu();
    void Toggle Fireworks(bool Enabled);
    void InitializeMixer();
    void OnUsableChanged_Mixer(bool CanUse);
    void PlayBartenderTip(class APlayerCharacter* User);
    void ExecuteUbergraph_BP_SpaceRig_Bartender(int32 EntryPoint);
};

#endif
