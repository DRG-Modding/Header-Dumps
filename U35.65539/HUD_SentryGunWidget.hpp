#ifndef UE4SS_SDK_HUD_SentryGunWidget_HPP
#define UE4SS_SDK_HUD_SentryGunWidget_HPP

class UHUD_SentryGunWidget_C : UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* AmmoDepleted;
    UWidgetAnimation* SentryPlaced;
    UWidgetAnimation* ShotFired;
    UBorder* Ammo_Border;
    UProgressBar* AmmoProgress;
    UBasic_HUD_BracketWindowBig_Single_C* Basic_HUD_BracketWindowBig_Single;
    UBasic_Menu_ColorBarVertical_C* Basic_Menu_ColorBarVertical;
    UTextBlock* DATA_Ammo;
    UTextBlock* DATA_SentryName;
    UImage* ICON_SentryBG;
    UImage* ICON_SentryOutline;
    UTextBlock* StateText;
    UVerticalBox* VerticalBox;
    ASentryGun* SentryGun;
    ARecallableSentryGun* RecallableActor;
    ARecallableSentryGunItem* Item;
    int32 Index;
    UInventoryComponent* Inventory;
    FHUD_SentryGunWidget_COnSentryStateChanged OnSentryStateChanged;
    void OnSentryStateChanged();

    void IsOutOfAmmo(bool& OutOfAmmo, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetAmmoLeft_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
    void GetMovementState(ERecallableActorState& State, bool CallFunc_IsValid_ReturnValue);
    void Set Sentry(URecallableSentryGun* Sentry Gun);
    void Set Sentry Home();
    void On Ammo Count Changed(int32 AmmoCount, int32 Change);
    void Init(UInventoryComponent* Inventory, URecallableSentryGunItem* Item, int32 Index);
    void OnActiveItemsChanged(URecallableSentryGunItem* Item);
    void OnStateChanged(URecallableActor* Sender, ERecallableActorState State);
    void Update State(FString reason);
    void PreConstruct(bool IsDesignTime);
    void OnSelectedItemChanged(URecallableSentryGun* SentryGun);
    void Set Selected(bool Is Selected);
    void OnItemEquipped(AItem* Item);
    void OnGunStateChanged(URedeployableSentryGun* Sender, ERedeployableSentryGunState NewState);
    void Check For Ammo Depletion();
    void OnDeployProgress_Event(float Progress);
    void Construct();
    void OnAmmoDepletedFinished();
    void OnItemUnequipped_Event(AItem* Item);
    void ExecuteUbergraph_HUD_SentryGunWidget(int32 EntryPoint, ItemDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, OnStateChanged__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, bool Temp_bool_Variable, uint8 Temp_byte_Variable, uint8 Temp_byte_Variable_1, OnDeployProgress__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsValid_ReturnValue, WidgetAnimationDynamicEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, ItemDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_4, URecallableSentryGun* K2Node_CustomEvent_Sentry_Gun, RecallableSentryGunSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate_5, int32 K2Node_CustomEvent_ammoCount, int32 K2Node_CustomEvent_Change, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_GetMaxAmmoCount_ReturnValue, int32 CallFunc_GetAmmoLeft_ReturnValue, FText CallFunc_Conv_IntToText_ReturnValue, FText CallFunc_Conv_IntToText_ReturnValue_1, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, float CallFunc_GetAmmoLeftPct_ReturnValue, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_GetAnimationCurrentTime_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UInventoryComponent* K2Node_CustomEvent_inventory, URecallableSentryGunItem* K2Node_CustomEvent_Item_3, int32 K2Node_CustomEvent_Index, URecallableSentryGunItem* K2Node_CustomEvent_Item_2, TArray<URecallableSentryGun*>& CallFunc_GetActiveSentryGuns_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, RecallableActorStateChanged__DelegateSignature K2Node_CreateDelegate_OutputDelegate_6, bool CallFunc_Less_IntInt_ReturnValue_1, URecallableSentryGun* CallFunc_Array_Get_Item, int32 CallFunc_GetAmmoLeft_ReturnValue_1, URecallableActor* K2Node_CustomEvent_Sender_1, ERecallableActorState K2Node_CustomEvent_State, FString K2Node_CustomEvent_Reason, bool CallFunc_IsValid_ReturnValue_2, ASentryGun* CallFunc_GetSentryGun_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, bool K2Node_Event_IsDesignTime, URecallableSentryGun* K2Node_CustomEvent_SentryGun, bool CallFunc_IsValid_ReturnValue_3, URecallableSentryGun* CallFunc_GetSelectedSentryGun_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool K2Node_CustomEvent_Is_Selected, URecallableSentryGun* Temp_object_Variable, bool Temp_bool_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_2, URecallableSentryGun* K2Node_Select_Default, TArray<FFormatArgumentData>& K2Node_MakeArray_Array_1, bool CallFunc_NotEqual_ObjectObject_ReturnValue, FText CallFunc_Format_ReturnValue_1, AItem* K2Node_CustomEvent_Item_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, URecallableSentryGun* CallFunc_GetSelectedSentryGun_ReturnValue_1, bool CallFunc_AreAllSentriesPlaced_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, URedeployableSentryGun* K2Node_DynamicCast_AsRedeployable_Sentry_Gun, bool K2Node_DynamicCast_bSuccess, uint8 K2Node_Select_Default_1, FLinearColor CallFunc_MenuColors_OutputColor, URedeployableSentryGun* K2Node_CustomEvent_Sender, ERedeployableSentryGunState K2Node_CustomEvent_newState, FSlateColor K2Node_MakeStruct_SlateColor, FLinearColor CallFunc_MenuColors_OutputColor_1, FLinearColor CallFunc_MenuColors_OutputColor_2, FSlateColor K2Node_MakeStruct_SlateColor_1, FSlateColor K2Node_MakeStruct_SlateColor_2, RecallableSentryGunItemSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate_7, FText CallFunc_GetStateDescription_Description, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_3, FLinearColor CallFunc_MenuColors_OutputColor_3, TArray<FFormatArgumentData>& K2Node_MakeArray_Array_2, FSlateColor K2Node_MakeStruct_SlateColor_3, FText CallFunc_Format_ReturnValue_2, FLinearColor CallFunc_MenuColors_OutputColor_4, FSlateColor K2Node_MakeStruct_SlateColor_4, FLinearColor CallFunc_MenuColorsAndOpacity_OutputColor, FSlateColor K2Node_MakeStruct_SlateColor_5, FLinearColor CallFunc_MenuColorsAndOpacity_OutputColor_1, FSlateColor K2Node_MakeStruct_SlateColor_6, AmmoCountChangedEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate_8, int32 CallFunc_GetAmmoLeft_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, bool CallFunc_IsAnimationPlaying_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue_1, float K2Node_CustomEvent_progress, FLinearColor CallFunc_MenuColors_OutputColor_5, float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_GetEndTime_ReturnValue, float CallFunc_Percent_FloatFloat_ReturnValue, AItem* K2Node_CustomEvent_Item, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_2);
    void OnSentryStateChanged__DelegateSignature();
}

#endif
