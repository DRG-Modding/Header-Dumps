#ifndef UE4SS_SDK_UI_GuntowerProgressBar_HPP
#define UE4SS_SDK_UI_GuntowerProgressBar_HPP

class UUI_GuntowerProgressBar_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Activated;
    class UWidgetAnimation* Startup;
    class UTextBlock* AnalysingText;
    class UImage* BaseElementBG;
    class UCanvasPanel* CanvasPanel_0;
    class UTextBlock* FinishedText;
    class UImage* Image_2;
    class UImage* Image_3;
    class UVerticalBox* ModulesDisplayRight;
    class UTextBlock* TextBlock_1;
    class UUI_Guntower_ProgressBar_ModuleIcon_C* UI_Guntower_ProgressBar_ModuleIcon_C_0;
    class UUI_Guntower_ProgressBar_ModuleIcon_C* UI_Guntower_ProgressBar_ModuleIcon_C_1;
    class UUI_Guntower_ProgressBar_ModuleIcon_C* UI_Guntower_ProgressBar_ModuleIcon_C_2;
    class AGuntowerActivationPlatform* ActivationPlatform;
    FTimerHandle VisibleTimer;
    class UMaterialInstanceDynamic* NewVar_0;

    void Construct();
    void SetStarterPlatform(class AGuntowerActivationPlatform* Starterplatform);
    void OnProgress(float Progress);
    void PlayerCountChanged(int32 playerCount);
    void OnFinished();
    void ExecuteUbergraph_UI_GuntowerProgressBar(int32 EntryPoint, FExecuteUbergraph_UI_GuntowerProgressBarK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class AGuntowerActivationPlatform* K2Node_CustomEvent_Starterplatform, FExecuteUbergraph_UI_GuntowerProgressBarK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, float K2Node_CustomEvent_progress, ESlateVisibility Temp_byte_Variable, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_Round_ReturnValue, int32 K2Node_CustomEvent_playerCount, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, bool CallFunc_Greater_IntInt_ReturnValue, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue, bool CallFunc_CanWidgetAppear_ReturnValue, ESlateVisibility Temp_byte_Variable_1, bool CallFunc_BooleanAND_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, bool Temp_bool_Variable, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, ESlateVisibility K2Node_Select_Default, FExecuteUbergraph_UI_GuntowerProgressBarK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsValid_ReturnValue, class AGuntowerModule* CallFunc_GetAssignedModule_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_GetModuleID_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, class AGuntowerModule* CallFunc_GetAssignedModule_ReturnValue_1, class UUI_Guntower_ProgressBar_ModuleIcon_C* K2Node_DynamicCast_AsUI_Guntower_Progress_Bar_Module_Icon, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetModuleID_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_1, class UWidget* CallFunc_GetChildAt_ReturnValue_1, class UUI_Guntower_ProgressBar_ModuleIcon_C* K2Node_DynamicCast_AsUI_Guntower_Progress_Bar_Module_Icon_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_2);
};

#endif
