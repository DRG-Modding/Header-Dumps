#ifndef UE4SS_SDK_HUD_SentryTrackingIcon_HPP
#define UE4SS_SDK_HUD_SentryTrackingIcon_HPP

class UHUD_SentryTrackingIcon_C : public UActorTrackingWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Shots Fired;
    class UProgressBar* AmmoProgress;
    class UImage* Arrow;
    class UBasic_HUD_BracketWindowSmall_C* Basic_HUD_BracketWindowSmall;
    class UImage* DataImage;
    class UHUD_DefaultLabel_C* Distance;
    class UHUD_DefaultLabel_C* Name;
    class UHUD_DefaultLabel_C* StateLabel;
    float ArrowRotation;
    float ArrowRadius;
    float ArrowAngle;
    class ARecallableSentryGun* RecallableActor;
    class ARedeployableSentryGun* SentryGun;
    class ARecallableSentryGunItem* Item;

    void SetInfo(FText InText, class UTexture2D* Texture, FText CallFunc_TextToUpper_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void UpdateArrow(bool inView, float Angle);
    void OnShow();
    void Construct();
    void OnItemEquipped(class AItem* Item);
    void Update State();
    void OnSentryIndexChanged(int32 Index);
    void OnInViewChanged(bool inView, float Angle);
    void OnAmmoCountChanged(int32 AmmoCount, int32 Change);
    void OnTargetSet(class AActor* NewTarget);
    void OnSelectedItemChanged_Event(class ARecallableSentryGun* SentryGun);
    void OnDeployProgress_Event(float Progress);
    void OnSentryGunStateChanged(class ARedeployableSentryGun* Sender, ERedeployableSentryGunState NewState);
    void OnTargetDistanceChanged(float Distance);
    void OnRecallableStateChanged(class ARecallableActor* Sender, ERecallableActorState State);
    void ExecuteUbergraph_HUD_SentryTrackingIcon(int32 EntryPoint, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, TEnumAsByte<ENUM_MenuColors::Type> Temp_byte_Variable, TEnumAsByte<ENUM_MenuColors::Type> Temp_byte_Variable_1, FExecuteUbergraph_HUD_SentryTrackingIconK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FExecuteUbergraph_HUD_SentryTrackingIconK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, FExecuteUbergraph_HUD_SentryTrackingIconK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2, FExecuteUbergraph_HUD_SentryTrackingIconK2Node_CreateDelegate_OutputDelegate_3 K2Node_CreateDelegate_OutputDelegate_3, FExecuteUbergraph_HUD_SentryTrackingIconK2Node_CreateDelegate_OutputDelegate_4 K2Node_CreateDelegate_OutputDelegate_4, FExecuteUbergraph_HUD_SentryTrackingIconK2Node_CreateDelegate_OutputDelegate_5 K2Node_CreateDelegate_OutputDelegate_5, class AActor* CallFunc_GetOwner_ReturnValue, class ARecallableSentryGunItem* K2Node_DynamicCast_AsRecallable_Sentry_Gun_Item, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetOwner_ReturnValue_1, class ARecallableSentryGun* K2Node_DynamicCast_AsRecallable_Sentry_Gun, bool K2Node_DynamicCast_bSuccess_1, ESlateVisibility Temp_byte_Variable_2, bool K2Node_Event_IsDesignTime, bool CallFunc_Not_PreBool_ReturnValue, bool K2Node_CustomEvent_InView, float K2Node_CustomEvent_Angle, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_DegSin_ReturnValue, float CallFunc_DegCos_ReturnValue, FText CallFunc_MakeLiteralText_ReturnValue, FVector2D CallFunc_MakeVector2D_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, FVector2D CallFunc_Multiply_Vector2DFloat_ReturnValue, class AItem* K2Node_CustomEvent_Item, ESlateVisibility Temp_byte_Variable_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue, FText CallFunc_GetStateDescription_Description, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool Temp_bool_Variable_1, ESlateVisibility K2Node_Select_Default, class UTexture2D* Temp_object_Variable, bool CallFunc_IsVisible_ReturnValue, class UTexture2D* Temp_object_Variable_1, bool Temp_bool_Variable_2, class UTexture2D* K2Node_Select_Default_1, FLinearColor CallFunc_MenuColors_OutputColor, ESlateVisibility Temp_byte_Variable_4, bool CallFunc_AreAllSentriesPlaced_ReturnValue, class ARecallableSentryGun* CallFunc_GetSelectedSentryGun_ReturnValue, ESlateVisibility Temp_byte_Variable_5, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, TEnumAsByte<ENUM_MenuColors::Type> K2Node_Select_Default_2, FLinearColor CallFunc_MenuColors_OutputColor_1, int32 K2Node_CustomEvent_Index, int32 CallFunc_Add_IntInt_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, bool K2Node_Event_inView, float K2Node_Event_Angle, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue, float CallFunc_GetAnimationCurrentTime_ReturnValue, bool Temp_bool_Variable_3, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, ESlateVisibility K2Node_Select_Default_3, float CallFunc_GetAmmoLeftPct_ReturnValue, int32 K2Node_CustomEvent_ammoCount, int32 K2Node_CustomEvent_Change, bool CallFunc_Less_IntInt_ReturnValue, class AActor* K2Node_Event_NewTarget, class ARedeployableSentryGun* K2Node_DynamicCast_AsRedeployable_Sentry_Gun, bool K2Node_DynamicCast_bSuccess_2, FExecuteUbergraph_HUD_SentryTrackingIconK2Node_CreateDelegate_OutputDelegate_6 K2Node_CreateDelegate_OutputDelegate_6, class ARecallableSentryGun* K2Node_CustomEvent_SentryGun, float K2Node_CustomEvent_progress, class ARedeployableSentryGun* K2Node_CustomEvent_Sender_1, ERedeployableSentryGunState K2Node_CustomEvent_newState, float K2Node_Event_Distance, float CallFunc_Divide_FloatFloat_ReturnValue, int32 CallFunc_Round_ReturnValue, class ARecallableActor* K2Node_CustomEvent_Sender, ERecallableActorState K2Node_CustomEvent_State, FText CallFunc_Conv_IntToText_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_2, TArray<FFormatArgumentData>& K2Node_MakeArray_Array_1, FText CallFunc_Format_ReturnValue_1);
};

#endif
