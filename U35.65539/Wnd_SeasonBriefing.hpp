#ifndef UE4SS_SDK_Wnd_SeasonBriefing_HPP
#define UE4SS_SDK_Wnd_SeasonBriefing_HPP

class UWnd_SeasonBriefing_C : UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBorder* Border;
    UBorder* Border_1;
    UBorder* Border_4;
    UBorder* Border_6;
    UImage* CreatureImage;
    UImage* Image_InfoIcon;
    URichTextSizable* RichTextSizable;
    USizeBox* SizeBox_Brief;
    UEnemyShowroomController* Showroom;
    bool IsRotatingLeft;

    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void PreConstruct(bool IsDesignTime);
    void OnShown();
    void OnClosed();
    void ExecuteUbergraph_Wnd_SeasonBriefing(int32 EntryPoint, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue, UEnemyShowroomController* CallFunc_DisplayEnemy_ReturnValue, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue_1, UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, UShowroomController* CallFunc_GetController_ReturnValue, FRotator CallFunc_GetShowroomRotation_ReturnValue, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue_2, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_Percent_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, FGeometry K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, bool K2Node_Event_IsDesignTime);
}

#endif
