#ifndef UE4SS_SDK_HUD_ActorTrackingIcon_HPP
#define UE4SS_SDK_HUD_ActorTrackingIcon_HPP

class UHUD_ActorTrackingIcon_C : public UActorTrackingWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Arrow;
    class UImage* DataImage;
    class UHUD_DefaultLabel_C* Distance;
    class UHUD_DefaultLabel_C* Name;
    float ArrowRotation;
    float ArrowRadius;
    float ArrowAngle;

    void SetInfo(FText InText, class UTexture2D* Texture, FLinearColor InTint, FSlateColor K2Node_MakeStruct_SlateColor);
    void OnTargetDistanceChanged(float Distance);
    void OnTargetSet(class AActor* NewTarget);
    void OnPlayerNameChanged(FString NewName);
    void OnInViewChanged(bool inView, float Angle);
    void PreConstruct(bool IsDesignTime);
    void UpdateArrow(bool inView, float Angle);
    void OnShow();
    void ExecuteUbergraph_HUD_ActorTrackingIcon(int32 EntryPoint, FLinearColor CallFunc_MenuColors_OutputColor, float K2Node_Event_Distance, class AActor* K2Node_Event_NewTarget, float CallFunc_Divide_FloatFloat_ReturnValue, class UObjectInfoComponent* CallFunc_GetComponentByClass_ReturnValue, float CallFunc_Lerp_ReturnValue, const FText CallFunc_GetInGameName_ReturnValue, float CallFunc_FClamp_ReturnValue, class UTexture2D* CallFunc_GetInGameIcon_ReturnValue, FVector2D CallFunc_MakeVector2D_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, class AFSDPlayerState* CallFunc_GetPlayerState_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, FString CallFunc_GetPlayerName_ReturnValue, FText CallFunc_Conv_StringToText_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, int32 CallFunc_Round_ReturnValue, FText CallFunc_Conv_IntToText_ReturnValue, FExecuteUbergraph_HUD_ActorTrackingIconK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, ESlateVisibility Temp_byte_Variable, FString K2Node_CustomEvent_NewName, class AActor* CallFunc_GetTarget_ReturnValue, FText CallFunc_Conv_StringToText_ReturnValue_1, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_1, bool K2Node_DynamicCast_bSuccess_1, bool K2Node_Event_inView, float K2Node_Event_Angle, class UTexture2D* CallFunc_GetHeroIcon_ReturnValue, bool CallFunc_IsVisible_ReturnValue, ESlateVisibility Temp_byte_Variable_1, bool K2Node_Event_IsDesignTime, bool CallFunc_Not_PreBool_ReturnValue, bool K2Node_CustomEvent_InView, float K2Node_CustomEvent_Angle, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_DegSin_ReturnValue, float CallFunc_DegCos_ReturnValue, FText CallFunc_MakeLiteralText_ReturnValue, FVector2D CallFunc_MakeVector2D_ReturnValue_1, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, FVector2D CallFunc_Multiply_Vector2DFloat_ReturnValue, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue, bool Temp_bool_Variable, ESlateVisibility K2Node_Select_Default, FLinearColor CallFunc_MenuColors_OutputColor_1);
};

#endif
