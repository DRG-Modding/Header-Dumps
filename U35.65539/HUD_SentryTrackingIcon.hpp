#ifndef UE4SS_SDK_HUD_SentryTrackingIcon_HPP
#define UE4SS_SDK_HUD_SentryTrackingIcon_HPP

class UHUD_SentryTrackingIcon_C : UActorTrackingWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* Shots Fired;
    UProgressBar* AmmoProgress;
    UImage* Arrow;
    UBasic_HUD_BracketWindowSmall_C* Basic_HUD_BracketWindowSmall;
    UImage* DataImage;
    UHUD_DefaultLabel_C* Distance;
    UHUD_DefaultLabel_C* Name;
    UHUD_DefaultLabel_C* StateLabel;
    float ArrowRotation;
    float ArrowRadius;
    float ArrowAngle;
    ARecallableSentryGun* RecallableActor;
    ARedeployableSentryGun* SentryGun;
    ARecallableSentryGunItem* Item;

    void SetInfo(FText InText, UTexture2D* Texture, FText CallFunc_TextToUpper_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void UpdateArrow(bool inView, float Angle);
    void OnShow();
    void Construct();
    void OnItemEquipped(AItem* Item);
    void Update State();
    void OnSentryIndexChanged(int32 Index);
    void OnInViewChanged(bool inView, float Angle);
    void OnAmmoCountChanged(int32 AmmoCount, int32 Change);
    void OnTargetSet(AActor* NewTarget);
    void OnSelectedItemChanged_Event(URecallableSentryGun* SentryGun);
    void OnDeployProgress_Event(float Progress);
    void OnSentryGunStateChanged(URedeployableSentryGun* Sender, ERedeployableSentryGunState NewState);
    void OnTargetDistanceChanged(float Distance);
    void OnRecallableStateChanged(URecallableActor* Sender, ERecallableActorState State);
    void ExecuteUbergraph_HUD_SentryTrackingIcon(int32 EntryPoint, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, uint8 Temp_byte_Variable, uint8 Temp_byte_Variable_1, SentryIndexChanged__DelegateSignature K2Node_CreateDelegate_OutputDelegate, AmmoCountChangedEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, RecallableSentryGunSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, OnDeployProgress__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, OnStateChanged__DelegateSignature K2Node_CreateDelegate_OutputDelegate_4, RecallableActorStateChanged__DelegateSignature K2Node_CreateDelegate_OutputDelegate_5, AActor* CallFunc_GetOwner_ReturnValue, URecallableSentryGunItem* K2Node_DynamicCast_AsRecallable_Sentry_Gun_Item, bool K2Node_DynamicCast_bSuccess, AActor* CallFunc_GetOwner_ReturnValue_1, URecallableSentryGun* K2Node_DynamicCast_AsRecallable_Sentry_Gun, bool K2Node_DynamicCast_bSuccess_1, ESlateVisibility Temp_byte_Variable_2, bool K2Node_Event_IsDesignTime, bool CallFunc_Not_PreBool_ReturnValue, bool K2Node_CustomEvent_InView, float K2Node_CustomEvent_Angle, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_DegSin_ReturnValue, float CallFunc_DegCos_ReturnValue, FText CallFunc_MakeLiteralText_ReturnValue, FVector2D CallFunc_MakeVector2D_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, FVector2D CallFunc_Multiply_Vector2DFloat_ReturnValue, AItem* K2Node_CustomEvent_Item, ESlateVisibility Temp_byte_Variable_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue, FText CallFunc_GetStateDescription_Description, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool Temp_bool_Variable_1, ESlateVisibility K2Node_Select_Default, UTexture2D* Temp_object_Variable, bool CallFunc_IsVisible_ReturnValue, UTexture2D* Temp_object_Variable_1, bool Temp_bool_Variable_2, UTexture2D* K2Node_Select_Default_1, FLinearColor CallFunc_MenuColors_OutputColor, ESlateVisibility Temp_byte_Variable_4, bool CallFunc_AreAllSentriesPlaced_ReturnValue, URecallableSentryGun* CallFunc_GetSelectedSentryGun_ReturnValue, ESlateVisibility Temp_byte_Variable_5, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, uint8 K2Node_Select_Default_2, FLinearColor CallFunc_MenuColors_OutputColor_1, int32 K2Node_CustomEvent_Index, int32 CallFunc_Add_IntInt_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, bool K2Node_Event_inView, float K2Node_Event_Angle, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue, float CallFunc_GetAnimationCurrentTime_ReturnValue, bool Temp_bool_Variable_3, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, ESlateVisibility K2Node_Select_Default_3, float CallFunc_GetAmmoLeftPct_ReturnValue, int32 K2Node_CustomEvent_ammoCount, int32 K2Node_CustomEvent_Change, bool CallFunc_Less_IntInt_ReturnValue, AActor* K2Node_Event_NewTarget, URedeployableSentryGun* K2Node_DynamicCast_AsRedeployable_Sentry_Gun, bool K2Node_DynamicCast_bSuccess_2, ItemDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_6, URecallableSentryGun* K2Node_CustomEvent_SentryGun, float K2Node_CustomEvent_progress, URedeployableSentryGun* K2Node_CustomEvent_Sender_1, ERedeployableSentryGunState K2Node_CustomEvent_newState, float K2Node_Event_Distance, float CallFunc_Divide_FloatFloat_ReturnValue, int32 CallFunc_Round_ReturnValue, URecallableActor* K2Node_CustomEvent_Sender, ERecallableActorState K2Node_CustomEvent_State, FText CallFunc_Conv_IntToText_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_2, TArray<FFormatArgumentData>& K2Node_MakeArray_Array_1, FText CallFunc_Format_ReturnValue_1);
}

#endif
