#ifndef UE4SS_SDK_BP_SpaceRig_Bartender_HPP
#define UE4SS_SDK_BP_SpaceRig_Bartender_HPP

class ABP_SpaceRig_Bartender_C : ASpaceRigBar
{
    FPointerToUberGraphFrame UberGraphFrame;
    USkeletalMeshComponent* Hat_Xmas;
    USkeletalMeshComponent* Hat_Halloween_Witch;
    UStaticMeshComponent* Mesh_Menu;
    UWidgetComponent* Widget_Menu;
    UBillboardComponent* Cable3End;
    UBillboardComponent* Cable2End;
    UBillboardComponent* Cable1End;
    UParticleSystemComponent* SupporterParticleSystem;
    UStaticMeshComponent* SM_XmasCapStandalone;
    UStaticMeshComponent* Cube1;
    UWidgetComponent* AbyssBarSign_widget;
    UCableComponent* Cable2;
    UCableComponent* Cable1;
    UCableComponent* Cable3;
    UBoxComponent* Box;
    UBoxComponent* GreetColliderBox;
    USkeletalMeshComponent* BartenderMesh;
    USceneComponent* BartenderRotator;
    float LerpTimeline_NewTrack_0_6C29CBCD4E3E9F9E0BF33ABFD7C7E018;
    TEnumAsByte<ETimelineDirection::Type> LerpTimeline__Direction_6C29CBCD4E3E9F9E0BF33ABFD7C7E018;
    UTimelineComponent* LerpTimeline;
    float FinishedTimeline_Time_B53F699A4A357873471E8CB3303A6A82;
    TEnumAsByte<ETimelineDirection::Type> FinishedTimeline__Direction_B53F699A4A357873471E8CB3303A6A82;
    UTimelineComponent* FinishedTimeline;
    AFSDPlayerState* CurrentCustomerState;
    UMaterialInterface* MaterialWithCustomer;
    UMaterialInterface* MaterialWillNotServe;
    UMaterialInterface* MaterialCanServe;
    TArray<ABP_DrinksBox_C*> DrinkBoxes;
    UDrinkableDataAsset* CurrentDrinkable;
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

    void SetCableAnchors();
    void PayCredits(UPlayerCharacter* User, int32 Amount, bool& Purchased, UFSDPlayerState* CallFunc_GetPlayerState_ReturnValue, UFSDPlayerController* CallFunc_GetPlayerController_ReturnValue, UBP_PlayerController_SpaceRig_C* K2Node_DynamicCast_AsBP_Player_Controller_Space_Rig, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
    void Spawn Mixer Beer(FString ControlEventID, int32 MixerCooldownToSet, UDrinkableDataAsset* OrderedDrink, FString Ordering Player, FText Announcement Text);
    void PlayGreeting(float& Duration, float CallFunc_PlayAnim_Duration);
    void PlayAnim(UAnimMontage* MontageToPlay, float& Duration, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, float CallFunc_Montage_Play_ReturnValue);
    void PlayNegative(float& Duration, float CallFunc_PlayAnim_Duration);
    void PlayAffirmative(float& Duration, float CallFunc_PlayAnim_Duration);
    void PourFinished();
    void Pour(ABP_DrinksBox_C* DrinkBox, float& PourDuration, TimerDynamicDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, FTransform CallFunc_K2_GetComponentToWorld_ReturnValue, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, float CallFunc_Montage_Play_ReturnValue, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue);
    void SetBartenderLightMaterial(UMaterialInterface* SourceMaterial, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1);
    void OnRep_CurrentCustomerState();
    void SetCustomer(UPlayerCharacter* Customer, bool CallFunc_IsValid_ReturnValue, UFSDPlayerState* CallFunc_GetPlayerState_ReturnValue, bool CallFunc_CanOrderNewRound_CanOrder);
    void CanOrderNewRound(bool& CanOrder, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, ABP_DrinksBox_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsAvailable_IsAvailable, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
    void UserConstructionScript();
    void LerpTimeline__FinishedFunc();
    void LerpTimeline__UpdateFunc();
    void FinishedTimeline__FinishedFunc();
    void FinishedTimeline__UpdateFunc();
    void BndEvt__BarUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(UPlayerCharacter* User, EInputKeys Key);
    void ReceiveBeginPlay();
    void BndEvt__BarUsable_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature(bool CanUse);
    void LookAtCustomer(UPlayerCharacter* Customer);
    void OnPlayerLeave_Event(UFSDPlayerState* PlayerState);
    void Update Bartender Lights();
    void SpawnDrinks(UDrinkableDataAsset* Drinable);
    void Lerp To(FTransform PourTransform, float Duration);
    void Server Spawn Next Drink();
    void OnAvailableForNewDrink_Event(ABP_DrinksBox_C* DrinkBox);
    void OnDrinkReady_Event(ABP_DrinksBox_C* DrinkBox);
    void Return To Idle();
    void All_BeginSpawnDrinks(bool PlayFireworks);
    void Client Spawn Next Drink(ABP_DrinksBox_C* DrinkBox);
    void BndEvt__GreetColliderBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void Look Towards(AActor* Actor, float Duration);
    void Init Background Menu();
    void Toggle Fireworks(bool Enabled);
    void InitializeMixer();
    void OnUsableChanged_Mixer(bool CanUse);
    void PlayBartenderTip(UPlayerCharacter* User);
    void ExecuteUbergraph_BP_SpaceRig_Bartender(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, PlayerDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, FVector CallFunc_K2_GetComponentLocation_ReturnValue_1, bool Temp_bool_IsClosed_Variable, FVector CallFunc_BreakTransform_Location_1, FRotator CallFunc_BreakTransform_Rotation_1, FVector CallFunc_BreakTransform_Scale_1, bool CallFunc_HasAuthority_ReturnValue_1, UPlayerCharacter* K2Node_ComponentBoundEvent_user, EInputKeys K2Node_ComponentBoundEvent_key, UFSDPlayerController* CallFunc_GetPlayerController_ReturnValue, bool K2Node_ComponentBoundEvent_canUse, UBP_PlayerController_SpaceRig_C* K2Node_DynamicCast_AsBP_Player_Controller_Space_Rig, bool K2Node_DynamicCast_bSuccess, UPlayerCharacter* K2Node_CustomEvent_Customer, bool CallFunc_IsValid_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_Subtract_VectorVector_ReturnValue, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue, UFSDPlayerState* K2Node_CustomEvent_PlayerState, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, FVector CallFunc_MakeVector_ReturnValue, UDrinkableDataAsset* K2Node_CustomEvent_Drinable, bool CallFunc_IsValid_ReturnValue_1, FTransform K2Node_CustomEvent_PourTransform, float K2Node_CustomEvent_Duration_1, float CallFunc_Divide_FloatFloat_ReturnValue, FTransform CallFunc_K2_GetComponentToWorld_ReturnValue, FTransform CallFunc_GetRelativeTransform_ReturnValue, FTransform CallFunc_MakeTransform_ReturnValue, ABP_DrinksBox_C* K2Node_CustomEvent_DrinkBox_2, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_CanOrderNewRound_CanOrder, UFSDEventManager* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool CallFunc_IsEventActive_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_IsEventActive_ReturnValue_1, ABP_DrinksBox_C* K2Node_CustomEvent_DrinkBox_1, bool K2Node_CustomEvent_PlayFireworks, float CallFunc_PlayAffirmative_Duration, FTransform CallFunc_K2_GetComponentToWorld_ReturnValue_1, UsableChangedSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, int32 Temp_int_Array_Index_Variable, ABP_DrinksBox_C* CallFunc_Array_Get_Item, FVector CallFunc_MakeVector_ReturnValue_1, ABP_DrinksBox_C* K2Node_CustomEvent_DrinkBox, FRotator CallFunc_MakeRotFromZY_ReturnValue, float CallFunc_Pour_PourDuration, FTransform CallFunc_MakeTransform_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, float CallFunc_Montage_Play_ReturnValue, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, AActor* K2Node_ComponentBoundEvent_OtherActor, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const FHitResult K2Node_ComponentBoundEvent_SweepResult, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_2, float CallFunc_PlayGreeting_Duration, AActor* K2Node_CustomEvent_actor, float K2Node_CustomEvent_Duration, float CallFunc_Add_FloatFloat_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, FVector CallFunc_K2_GetComponentLocation_ReturnValue_2, FTransform CallFunc_K2_GetComponentToWorld_ReturnValue_2, FVector CallFunc_Subtract_VectorVector_ReturnValue_1, FVector CallFunc_BreakTransform_Location_2, FRotator CallFunc_BreakTransform_Rotation_2, FVector CallFunc_BreakTransform_Scale_2, FVector CallFunc_MakeVector_ReturnValue_2, FRotator CallFunc_MakeRotFromZY_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_3, FTransform CallFunc_MakeTransform_ReturnValue_2, UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, OnDrinkReady__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, OnAvailableForNewDrink__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue_1, bool K2Node_CustomEvent_Enabled, UUI_Bar_BackgroundMenu_C* K2Node_DynamicCast_AsUI_Bar_Background_Menu, bool K2Node_DynamicCast_bSuccess_2, FTransform CallFunc_TLerp_ReturnValue, FHitResult CallFunc_K2_SetRelativeTransform_SweepHitResult, UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, bool K2Node_CustomEvent_canUse, int32 Temp_int_Array_Index_Variable_1, ABP_DrinksBox_C* CallFunc_Array_Get_Item_1, int32 Temp_int_Variable, UPlayerCharacter* K2Node_Event_user, float CallFunc_PlayGreeting_Duration_1, float CallFunc_Add_FloatFloat_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_6, FVector CallFunc_BreakTransform_Location_3, FRotator CallFunc_BreakTransform_Rotation_3, FVector CallFunc_BreakTransform_Scale_3, FTransform CallFunc_MakeTransform_ReturnValue_3, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, FVector CallFunc_Subtract_VectorVector_ReturnValue_2, FRotator CallFunc_MakeRotFromZY_ReturnValue_2, FVector CallFunc_BreakTransform_Location_4, FRotator CallFunc_BreakTransform_Rotation_4, FVector CallFunc_BreakTransform_Scale_4, FTransform CallFunc_MakeTransform_ReturnValue_4, FTransform CallFunc_MakeTransform_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_7, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_IsFreeBeerRewardActive_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsValid_ReturnValue_8, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_3, int32 CallFunc_Min_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, bool Temp_bool_Variable, FTransform CallFunc_TLerp_ReturnValue_1, FHitResult CallFunc_K2_SetWorldTransform_SweepHitResult, UMaterialInterface* K2Node_Select_Default, ABP_DrinksBox_C* CallFunc_Array_Get_Item_2, float CallFunc_Pour_PourDuration_1);
}

#endif
