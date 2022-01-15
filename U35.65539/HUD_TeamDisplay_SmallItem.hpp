#ifndef UE4SS_SDK_HUD_TeamDisplay_SmallItem_HPP
#define UE4SS_SDK_HUD_TeamDisplay_SmallItem_HPP

class UHUD_TeamDisplay_SmallItem_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* RevivedAnimation;
    UWidgetAnimation* DamageAnimation;
    UWidgetAnimation* IntroAnimation;
    UWidgetAnimation* ParalyzedAnimation;
    UWidgetAnimation* DownAnimation;
    UITM_SupplyBar_C* AmmoBar;
    USizeBox* AmmoSizeBox;
    UImage* DownIcon;
    UImage* DownTarget;
    UProgressBar* HealthBar;
    USizeBox* HealthBarHolder;
    UBorder* HealthBorder;
    UWidgetSwitcher* IconSwitcher;
    UITM_CharacterIcon_C* ITM_CharacterIcon;
    UTextBlock* PlayerName;
    UCircularThrobber* PlayerOnHisWayIndicator;
    UUI_PlayerSpeaking_C* PlayerSpeaking;
    UUI_CallingMolly_C* UI_CallingMolly;
    AFSDPlayerState* PlayerState;
    UPlayerHealthComponent* HealthComponent;
    APlayerCharacter* PlayerCharacter;
    bool IsDown;
    bool IsParalyzed;
    bool AnimateIntro;
    bool LaserpointerEquipped;
    APlayerCharacter* LocalCharacter;
    AFSDPlayerState* LocalPlayerState;
    bool LookingAtSupplyPod;
    UHUDVisibilityGroup* VisibilityGroup;
    bool DownFollowingPlayer;

    void ShowDynamicHUD();
    void OnVisibilityModeChanged(UHUDVisibilityGroup* Group, EHUDVisibilityMode Mode);
    void BndEvt__PlayerSpeaking_K2Node_ComponentBoundEvent_0_OnChanged__DelegateSignature(bool InTalking);
    void OnPlayerNameChanged(FString NewName);
    void OnPlayerLeave_Event(UFSDPlayerState* PlayerState);
    void StopAnim(UWidgetAnimation* Anim);
    void OnPlayerCharacterSpawned(UPlayerCharacter* PlayerCharacter);
    void OnDeath(UHealthComponentBase* HealthComponent);
    void OnDamageTaken_Event(float Amount);
    void OnHealthChanged(float Health);
    void PlayAnim(UWidgetAnimation* Anim);
    void OnCharacterStateChanged(ECharacterState NewState);
    void OnOwningCharacterSpawned(UPlayerCharacter* PlayerCharacter);
    void Construct();
    void OnCharacterStateChanged_Event(ECharacterState NewState);
    void OnDownCameraTargetChanged(UPlayerCharacter* Target);
    void OnLaserPointerReleased_Event();
    void OnLaserPointerPressed_Event();
    void Show Ammo Bar();
    void OnEndHoveringEvent_Event();
    void OnBeginHoveringEvent(UUsableComponentBase* Component);
    void PreConstruct(bool IsDesignTime);
    void OnSupplyStatusChangedEvent(float ammoStatus01, float healthStatus01);
    void ExecuteUbergraph_HUD_TeamDisplay_SmallItem(int32 EntryPoint, PlayerNameChangedSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate, PlayerDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue, PlayerSpawnedSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, DeathSig__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, DamageSig__DelegateSignature K2Node_CreateDelegate_OutputDelegate_4, HealthChangedSig__DelegateSignature K2Node_CreateDelegate_OutputDelegate_5, OnCharacterStateChangedSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate_6, bool CallFunc_IsValid_ReturnValue_1, PlayerSpawnedSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate_7, OnCharacterStateChangedSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate_8, DownCameraTargetChanged__DelegateSignature K2Node_CreateDelegate_OutputDelegate_9, OnLaserPointerPressedSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate_10, OnLaserPointerPressedSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate_11, EndUsingDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_12, BeginUsingDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_13, SupplyStatusChangedDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_14, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, FLinearColor CallFunc_MenuColors_OutputColor, FLinearColor CallFunc_MenuColors_OutputColor_1, FLinearColor CallFunc_MenuColors_OutputColor_2, FSlateColor K2Node_MakeStruct_SlateColor, float CallFunc_GetHealthRegeneratingTargetRatio_ReturnValue, UFSDPlayerState* CallFunc_GetOwningFSDPlayerState_ReturnValue, float CallFunc_GetHealthPct_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_IsAlive_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, EHUDVisibilityMode CallFunc_GetMode_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_2, UHUDVisibilityGroup* K2Node_CustomEvent_Group, EHUDVisibilityMode K2Node_CustomEvent_Mode, ModeDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_15, bool Temp_bool_Variable, EHUDVisibilityMode CallFunc_GetMode_ReturnValue_1, EHUDVisibilityMode CallFunc_GetMode_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue, EHUDVisibilityMode CallFunc_GetMode_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, int32 Temp_int_Variable, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue_5, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_6, bool K2Node_ComponentBoundEvent_InTalking, FString K2Node_CustomEvent_NewName, FString CallFunc_GetPlayerName_ReturnValue, FString CallFunc_GetSubstring_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, int32 CallFunc_Len_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, FString K2Node_Select_Default, ESlateVisibility Temp_byte_Variable, FText CallFunc_Conv_StringToText_ReturnValue, UFSDPlayerState* K2Node_CustomEvent_PlayerState, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UWidgetAnimation* K2Node_CustomEvent_Anim_1, ESlateVisibility Temp_byte_Variable_1, float CallFunc_GetAnimationCurrentTime_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, UPlayerCharacter* K2Node_CustomEvent_PlayerCharacter_1, ESlateVisibility Temp_byte_Variable_2, bool CallFunc_IsValid_ReturnValue_4, float CallFunc_GetRealTimeSeconds_ReturnValue, EHUDVisibilityMode Temp_byte_Variable_3, float CallFunc_Percent_FloatFloat_ReturnValue, ESlateVisibility K2Node_Select_Default_1, UHealthComponentBase* K2Node_CustomEvent_HealthComponent, float CallFunc_GetAnimationCurrentTime_ReturnValue_1, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, bool CallFunc_IsAlive_ReturnValue_1, float K2Node_CustomEvent_Amount, float CallFunc_GetHealthPct_ReturnValue_1, float K2Node_CustomEvent_health, float CallFunc_GetEndTime_ReturnValue, float CallFunc_GetTimeSeconds_ReturnValue, float CallFunc_Percent_FloatFloat_ReturnValue_1, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_4, UWidgetAnimation* K2Node_CustomEvent_Anim, bool CallFunc_IsDead_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_5, int32 Temp_int_Variable_1, ECharacterState K2Node_CustomEvent_newState_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue, UPlayerCharacter* K2Node_CustomEvent_PlayerCharacter, ECharacterState K2Node_CustomEvent_newState, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool Temp_bool_Variable_1, int32 K2Node_Select_Default_2, UPlayerCharacter* K2Node_CustomEvent_Target, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, bool CallFunc_NotEqual_BoolBool_ReturnValue, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, bool CallFunc_Not_PreBool_ReturnValue_4, bool CallFunc_Not_PreBool_ReturnValue_5, bool CallFunc_BooleanAND_ReturnValue_7, UUsableComponentBase* K2Node_CustomEvent_component, AActor* CallFunc_GetOwner_ReturnValue, ARessuplyPod* K2Node_DynamicCast_AsRessuply_Pod, bool K2Node_DynamicCast_bSuccess, bool K2Node_Event_IsDesignTime, float CallFunc_GetSupplyHealthStatus_ReturnValue, float CallFunc_GetSupplyAmmoStatus_ReturnValue, float K2Node_CustomEvent_ammoStatus01, float K2Node_CustomEvent_healthStatus01);
}

#endif
