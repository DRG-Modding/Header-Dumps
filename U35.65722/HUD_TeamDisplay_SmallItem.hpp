#ifndef UE4SS_SDK_HUD_TeamDisplay_SmallItem_HPP
#define UE4SS_SDK_HUD_TeamDisplay_SmallItem_HPP

class UHUD_TeamDisplay_SmallItem_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* RevivedAnimation;
    class UWidgetAnimation* DamageAnimation;
    class UWidgetAnimation* IntroAnimation;
    class UWidgetAnimation* ParalyzedAnimation;
    class UWidgetAnimation* DownAnimation;
    class UITM_SupplyBar_C* AmmoBar;
    class USizeBox* AmmoSizeBox;
    class UImage* DownIcon;
    class UImage* DownTarget;
    class UProgressBar* HealthBar;
    class USizeBox* HealthBarHolder;
    class UBorder* HealthBorder;
    class UWidgetSwitcher* IconSwitcher;
    class UITM_CharacterIcon_C* ITM_CharacterIcon;
    class UTextBlock* PlayerName;
    class UCircularThrobber* PlayerOnHisWayIndicator;
    class UUI_PlayerSpeaking_C* PlayerSpeaking;
    class UUI_CallingMolly_C* UI_CallingMolly;
    class AFSDPlayerState* PlayerState;
    class UPlayerHealthComponent* HealthComponent;
    class APlayerCharacter* PlayerCharacter;
    bool IsDown;
    bool IsParalyzed;
    bool AnimateIntro;
    bool LaserpointerEquipped;
    class APlayerCharacter* LocalCharacter;
    class AFSDPlayerState* LocalPlayerState;
    bool LookingAtSupplyPod;
    class UHUDVisibilityGroup* VisibilityGroup;
    bool DownFollowingPlayer;

    void ShowDynamicHUD();
    void OnVisibilityModeChanged(class UHUDVisibilityGroup* Group, EHUDVisibilityMode Mode);
    void BndEvt__PlayerSpeaking_K2Node_ComponentBoundEvent_0_OnChanged__DelegateSignature(bool InTalking);
    void OnPlayerNameChanged(FString NewName);
    void OnPlayerLeave_Event(class AFSDPlayerState* PlayerState);
    void StopAnim(class UWidgetAnimation* Anim);
    void OnPlayerCharacterSpawned(class APlayerCharacter* PlayerCharacter);
    void OnDeath(class UHealthComponentBase* HealthComponent);
    void OnDamageTaken_Event(float Amount);
    void OnHealthChanged(float Health);
    void PlayAnim(class UWidgetAnimation* Anim);
    void OnCharacterStateChanged(ECharacterState NewState);
    void OnOwningCharacterSpawned(class APlayerCharacter* PlayerCharacter);
    void Construct();
    void OnCharacterStateChanged_Event(ECharacterState NewState);
    void OnDownCameraTargetChanged(class APlayerCharacter* Target);
    void OnLaserPointerReleased_Event();
    void OnLaserPointerPressed_Event();
    void Show Ammo Bar();
    void OnEndHoveringEvent_Event();
    void OnBeginHoveringEvent(class UUsableComponentBase* Component);
    void PreConstruct(bool IsDesignTime);
    void OnSupplyStatusChangedEvent(float ammoStatus01, float healthStatus01);
    void ExecuteUbergraph_HUD_TeamDisplay_SmallItem(int32 EntryPoint, FExecuteUbergraph_HUD_TeamDisplay_SmallItemK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FExecuteUbergraph_HUD_TeamDisplay_SmallItemK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue, FExecuteUbergraph_HUD_TeamDisplay_SmallItemK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2, FExecuteUbergraph_HUD_TeamDisplay_SmallItemK2Node_CreateDelegate_OutputDelegate_3 K2Node_CreateDelegate_OutputDelegate_3, FExecuteUbergraph_HUD_TeamDisplay_SmallItemK2Node_CreateDelegate_OutputDelegate_4 K2Node_CreateDelegate_OutputDelegate_4, FExecuteUbergraph_HUD_TeamDisplay_SmallItemK2Node_CreateDelegate_OutputDelegate_5 K2Node_CreateDelegate_OutputDelegate_5, FExecuteUbergraph_HUD_TeamDisplay_SmallItemK2Node_CreateDelegate_OutputDelegate_6 K2Node_CreateDelegate_OutputDelegate_6, bool CallFunc_IsValid_ReturnValue_1, FExecuteUbergraph_HUD_TeamDisplay_SmallItemK2Node_CreateDelegate_OutputDelegate_7 K2Node_CreateDelegate_OutputDelegate_7, FExecuteUbergraph_HUD_TeamDisplay_SmallItemK2Node_CreateDelegate_OutputDelegate_8 K2Node_CreateDelegate_OutputDelegate_8, FExecuteUbergraph_HUD_TeamDisplay_SmallItemK2Node_CreateDelegate_OutputDelegate_9 K2Node_CreateDelegate_OutputDelegate_9, FExecuteUbergraph_HUD_TeamDisplay_SmallItemK2Node_CreateDelegate_OutputDelegate_10 K2Node_CreateDelegate_OutputDelegate_10, FExecuteUbergraph_HUD_TeamDisplay_SmallItemK2Node_CreateDelegate_OutputDelegate_11 K2Node_CreateDelegate_OutputDelegate_11, FExecuteUbergraph_HUD_TeamDisplay_SmallItemK2Node_CreateDelegate_OutputDelegate_12 K2Node_CreateDelegate_OutputDelegate_12, FExecuteUbergraph_HUD_TeamDisplay_SmallItemK2Node_CreateDelegate_OutputDelegate_13 K2Node_CreateDelegate_OutputDelegate_13, FExecuteUbergraph_HUD_TeamDisplay_SmallItemK2Node_CreateDelegate_OutputDelegate_14 K2Node_CreateDelegate_OutputDelegate_14, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, FLinearColor CallFunc_MenuColors_OutputColor, FLinearColor CallFunc_MenuColors_OutputColor_1, FLinearColor CallFunc_MenuColors_OutputColor_2, FSlateColor K2Node_MakeStruct_SlateColor, float CallFunc_GetHealthRegeneratingTargetRatio_ReturnValue, class AFSDPlayerState* CallFunc_GetOwningFSDPlayerState_ReturnValue, float CallFunc_GetHealthPct_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_IsAlive_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, EHUDVisibilityMode CallFunc_GetMode_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_2, class UHUDVisibilityGroup* K2Node_CustomEvent_Group, EHUDVisibilityMode K2Node_CustomEvent_Mode, FExecuteUbergraph_HUD_TeamDisplay_SmallItemK2Node_CreateDelegate_OutputDelegate_15 K2Node_CreateDelegate_OutputDelegate_15, bool Temp_bool_Variable, EHUDVisibilityMode CallFunc_GetMode_ReturnValue_1, EHUDVisibilityMode CallFunc_GetMode_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue, EHUDVisibilityMode CallFunc_GetMode_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, int32 Temp_int_Variable, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue_5, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_6, bool K2Node_ComponentBoundEvent_InTalking, FString K2Node_CustomEvent_NewName, FString CallFunc_GetPlayerName_ReturnValue, FString CallFunc_GetSubstring_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, int32 CallFunc_Len_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, FString K2Node_Select_Default, ESlateVisibility Temp_byte_Variable, FText CallFunc_Conv_StringToText_ReturnValue, class AFSDPlayerState* K2Node_CustomEvent_PlayerState, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UWidgetAnimation* K2Node_CustomEvent_Anim_1, ESlateVisibility Temp_byte_Variable_1, float CallFunc_GetAnimationCurrentTime_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class APlayerCharacter* K2Node_CustomEvent_PlayerCharacter_1, ESlateVisibility Temp_byte_Variable_2, bool CallFunc_IsValid_ReturnValue_4, float CallFunc_GetRealTimeSeconds_ReturnValue, EHUDVisibilityMode Temp_byte_Variable_3, float CallFunc_Percent_FloatFloat_ReturnValue, ESlateVisibility K2Node_Select_Default_1, class UHealthComponentBase* K2Node_CustomEvent_HealthComponent, float CallFunc_GetAnimationCurrentTime_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, bool CallFunc_IsAlive_ReturnValue_1, float K2Node_CustomEvent_Amount, float CallFunc_GetHealthPct_ReturnValue_1, float K2Node_CustomEvent_health, float CallFunc_GetEndTime_ReturnValue, float CallFunc_GetTimeSeconds_ReturnValue, float CallFunc_Percent_FloatFloat_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_4, class UWidgetAnimation* K2Node_CustomEvent_Anim, bool CallFunc_IsDead_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_5, int32 Temp_int_Variable_1, ECharacterState K2Node_CustomEvent_newState_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue, class APlayerCharacter* K2Node_CustomEvent_PlayerCharacter, ECharacterState K2Node_CustomEvent_newState, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool Temp_bool_Variable_1, int32 K2Node_Select_Default_2, class APlayerCharacter* K2Node_CustomEvent_Target, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, bool CallFunc_NotEqual_BoolBool_ReturnValue, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, bool CallFunc_Not_PreBool_ReturnValue_4, bool CallFunc_Not_PreBool_ReturnValue_5, bool CallFunc_BooleanAND_ReturnValue_7, class UUsableComponentBase* K2Node_CustomEvent_component, class AActor* CallFunc_GetOwner_ReturnValue, class ARessuplyPod* K2Node_DynamicCast_AsRessuply_Pod, bool K2Node_DynamicCast_bSuccess, bool K2Node_Event_IsDesignTime, float CallFunc_GetSupplyHealthStatus_ReturnValue, float CallFunc_GetSupplyAmmoStatus_ReturnValue, float K2Node_CustomEvent_ammoStatus01, float K2Node_CustomEvent_healthStatus01);
};

#endif
