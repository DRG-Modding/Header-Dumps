#ifndef UE4SS_SDK_Wnd_SeasonBriefing_HPP
#define UE4SS_SDK_Wnd_SeasonBriefing_HPP

class UWnd_SeasonBriefing_C : public UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBorder* Border;
    class UBorder* Border_1;
    class UBorder* Border_4;
    class UBorder* Border_6;
    class UImage* CreatureImage;
    class UImage* Image_InfoIcon;
    class URichTextSizable* RichTextSizable;
    class USizeBox* SizeBox_Brief;
    class UEnemyShowroomController* Showroom;
    bool IsRotatingLeft;

    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void PreConstruct(bool IsDesignTime);
    void OnShown();
    void OnClosed();
    void ExecuteUbergraph_Wnd_SeasonBriefing(int32 EntryPoint, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue, class UEnemyShowroomController* CallFunc_DisplayEnemy_ReturnValue, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UShowroomController* CallFunc_GetController_ReturnValue, FRotator CallFunc_GetShowroomRotation_ReturnValue, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue_2, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_Percent_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, FGeometry K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, bool K2Node_Event_IsDesignTime);
};

#endif
