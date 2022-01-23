#ifndef UE4SS_SDK_HUD_SentryGunWidget_HPP
#define UE4SS_SDK_HUD_SentryGunWidget_HPP

class UHUD_SentryGunWidget_C : public UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AmmoDepleted;
    class UWidgetAnimation* SentryPlaced;
    class UWidgetAnimation* ShotFired;
    class UBorder* Ammo_Border;
    class UProgressBar* AmmoProgress;
    class UBasic_HUD_BracketWindowBig_Single_C* Basic_HUD_BracketWindowBig_Single;
    class UBasic_Menu_ColorBarVertical_C* Basic_Menu_ColorBarVertical;
    class UTextBlock* DATA_Ammo;
    class UTextBlock* DATA_SentryName;
    class UImage* ICON_SentryBG;
    class UImage* ICON_SentryOutline;
    class UTextBlock* StateText;
    class UVerticalBox* VerticalBox;
    class ASentryGun* SentryGun;
    class ARecallableSentryGun* RecallableActor;
    class ARecallableSentryGunItem* Item;
    int32 Index;
    class UInventoryComponent* Inventory;
    FHUD_SentryGunWidget_COnSentryStateChanged OnSentryStateChanged;
    void OnSentryStateChanged();

    void IsOutOfAmmo(bool& OutOfAmmo, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetAmmoLeft_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
    void GetMovementState(ERecallableActorState& State, bool CallFunc_IsValid_ReturnValue);
    void Set Sentry(class ARecallableSentryGun* Sentry Gun);
    void Set Sentry Home();
    void On Ammo Count Changed(int32 AmmoCount, int32 Change);
    void Init(class UInventoryComponent* Inventory, class ARecallableSentryGunItem* Item, int32 Index);
    void OnActiveItemsChanged(class ARecallableSentryGunItem* Item);
    void OnStateChanged(class ARecallableActor* Sender, ERecallableActorState State);
    void Update State(FString reason);
    void PreConstruct(bool IsDesignTime);
    void OnSelectedItemChanged(class ARecallableSentryGun* SentryGun);
    void Set Selected(bool Is Selected);
    void OnItemEquipped(class AItem* Item);
    void OnGunStateChanged(class ARedeployableSentryGun* Sender, ERedeployableSentryGunState NewState);
    void Check For Ammo Depletion();
    void OnDeployProgress_Event(float Progress);
    void Construct();
    void OnAmmoDepletedFinished();
    void OnItemUnequipped_Event(class AItem* Item);
    void ExecuteUbergraph_HUD_SentryGunWidget(int32 EntryPoint, FExecuteUbergraph_HUD_SentryGunWidgetK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FExecuteUbergraph_HUD_SentryGunWidgetK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, bool Temp_bool_Variable, TEnumAsByte<ENUM_MenuColors::Type> Temp_byte_Variable, TEnumAsByte<ENUM_MenuColors::Type> Temp_byte_Variable_1, FExecuteUbergraph_HUD_SentryGunWidgetK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsValid_ReturnValue, FExecuteUbergraph_HUD_SentryGunWidgetK2Node_CreateDelegate_OutputDelegate_3 K2Node_CreateDelegate_OutputDelegate_3, FExecuteUbergraph_HUD_SentryGunWidgetK2Node_CreateDelegate_OutputDelegate_4 K2Node_CreateDelegate_OutputDelegate_4, class ARecallableSentryGun* K2Node_CustomEvent_Sentry_Gun, FExecuteUbergraph_HUD_SentryGunWidgetK2Node_CreateDelegate_OutputDelegate_5 K2Node_CreateDelegate_OutputDelegate_5, int32 K2Node_CustomEvent_ammoCount, int32 K2Node_CustomEvent_Change, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_GetMaxAmmoCount_ReturnValue, int32 CallFunc_GetAmmoLeft_ReturnValue, FText CallFunc_Conv_IntToText_ReturnValue, FText CallFunc_Conv_IntToText_ReturnValue_1, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, float CallFunc_GetAmmoLeftPct_ReturnValue, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_GetAnimationCurrentTime_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UInventoryComponent* K2Node_CustomEvent_inventory, class ARecallableSentryGunItem* K2Node_CustomEvent_Item_3, int32 K2Node_CustomEvent_Index, class ARecallableSentryGunItem* K2Node_CustomEvent_Item_2, TArray<class ARecallableSentryGun*>& CallFunc_GetActiveSentryGuns_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, FExecuteUbergraph_HUD_SentryGunWidgetK2Node_CreateDelegate_OutputDelegate_6 K2Node_CreateDelegate_OutputDelegate_6, bool CallFunc_Less_IntInt_ReturnValue_1, class ARecallableSentryGun* CallFunc_Array_Get_Item, int32 CallFunc_GetAmmoLeft_ReturnValue_1, class ARecallableActor* K2Node_CustomEvent_Sender_1, ERecallableActorState K2Node_CustomEvent_State, FString K2Node_CustomEvent_Reason, bool CallFunc_IsValid_ReturnValue_2, class ASentryGun* CallFunc_GetSentryGun_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, bool K2Node_Event_IsDesignTime, class ARecallableSentryGun* K2Node_CustomEvent_SentryGun, bool CallFunc_IsValid_ReturnValue_3, class ARecallableSentryGun* CallFunc_GetSelectedSentryGun_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool K2Node_CustomEvent_Is_Selected, class ARecallableSentryGun* Temp_object_Variable, bool Temp_bool_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_2, class ARecallableSentryGun* K2Node_Select_Default, TArray<FFormatArgumentData>& K2Node_MakeArray_Array_1, bool CallFunc_NotEqual_ObjectObject_ReturnValue, FText CallFunc_Format_ReturnValue_1, class AItem* K2Node_CustomEvent_Item_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, class ARecallableSentryGun* CallFunc_GetSelectedSentryGun_ReturnValue_1, bool CallFunc_AreAllSentriesPlaced_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class ARedeployableSentryGun* K2Node_DynamicCast_AsRedeployable_Sentry_Gun, bool K2Node_DynamicCast_bSuccess, TEnumAsByte<ENUM_MenuColors::Type> K2Node_Select_Default_1, FLinearColor CallFunc_MenuColors_OutputColor, class ARedeployableSentryGun* K2Node_CustomEvent_Sender, ERedeployableSentryGunState K2Node_CustomEvent_newState, FSlateColor K2Node_MakeStruct_SlateColor, FLinearColor CallFunc_MenuColors_OutputColor_1, FLinearColor CallFunc_MenuColors_OutputColor_2, FSlateColor K2Node_MakeStruct_SlateColor_1, FSlateColor K2Node_MakeStruct_SlateColor_2, FExecuteUbergraph_HUD_SentryGunWidgetK2Node_CreateDelegate_OutputDelegate_7 K2Node_CreateDelegate_OutputDelegate_7, FText CallFunc_GetStateDescription_Description, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_3, FLinearColor CallFunc_MenuColors_OutputColor_3, TArray<FFormatArgumentData>& K2Node_MakeArray_Array_2, FSlateColor K2Node_MakeStruct_SlateColor_3, FText CallFunc_Format_ReturnValue_2, FLinearColor CallFunc_MenuColors_OutputColor_4, FSlateColor K2Node_MakeStruct_SlateColor_4, FLinearColor CallFunc_MenuColorsAndOpacity_OutputColor, FSlateColor K2Node_MakeStruct_SlateColor_5, FLinearColor CallFunc_MenuColorsAndOpacity_OutputColor_1, FSlateColor K2Node_MakeStruct_SlateColor_6, FExecuteUbergraph_HUD_SentryGunWidgetK2Node_CreateDelegate_OutputDelegate_8 K2Node_CreateDelegate_OutputDelegate_8, int32 CallFunc_GetAmmoLeft_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, bool CallFunc_IsAnimationPlaying_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue_1, float K2Node_CustomEvent_progress, FLinearColor CallFunc_MenuColors_OutputColor_5, float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_GetEndTime_ReturnValue, float CallFunc_Percent_FloatFloat_ReturnValue, class AItem* K2Node_CustomEvent_Item, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_2);
    void OnSentryStateChanged__DelegateSignature();
};

#endif
