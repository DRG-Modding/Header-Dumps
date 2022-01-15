#ifndef UE4SS_SDK_UI_GuntowerProgressBar_HPP
#define UE4SS_SDK_UI_GuntowerProgressBar_HPP

class UUI_GuntowerProgressBar_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* Activated;
    UWidgetAnimation* Startup;
    UTextBlock* AnalysingText;
    UImage* BaseElementBG;
    UCanvasPanel* CanvasPanel_0;
    UTextBlock* FinishedText;
    UImage* Image_2;
    UImage* Image_3;
    UVerticalBox* ModulesDisplayRight;
    UTextBlock* TextBlock_1;
    UUI_Guntower_ProgressBar_ModuleIcon_C* UI_Guntower_ProgressBar_ModuleIcon_C_0;
    UUI_Guntower_ProgressBar_ModuleIcon_C* UI_Guntower_ProgressBar_ModuleIcon_C_1;
    UUI_Guntower_ProgressBar_ModuleIcon_C* UI_Guntower_ProgressBar_ModuleIcon_C_2;
    AGuntowerActivationPlatform* ActivationPlatform;
    FTimerHandle VisibleTimer;
    UMaterialInstanceDynamic* NewVar_0;

    void Construct();
    void SetStarterPlatform(AGuntowerActivationPlatform* Starterplatform);
    void OnProgress(float Progress);
    void PlayerCountChanged(int32 playerCount);
    void OnFinished();
    void ExecuteUbergraph_UI_GuntowerProgressBar(int32 EntryPoint, ProgressUpdated__DelegateSignature K2Node_CreateDelegate_OutputDelegate, AGuntowerActivationPlatform* K2Node_CustomEvent_Starterplatform, OnFinished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, float K2Node_CustomEvent_progress, ESlateVisibility Temp_byte_Variable, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_Round_ReturnValue, int32 K2Node_CustomEvent_playerCount, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, bool CallFunc_Greater_IntInt_ReturnValue, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue, bool CallFunc_CanWidgetAppear_ReturnValue, ESlateVisibility Temp_byte_Variable_1, bool CallFunc_BooleanAND_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, bool Temp_bool_Variable, UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, ESlateVisibility K2Node_Select_Default, PlayersInsideChanged__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsValid_ReturnValue, UGuntowerModule* CallFunc_GetAssignedModule_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_GetModuleID_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, UWidget* CallFunc_GetChildAt_ReturnValue, UGuntowerModule* CallFunc_GetAssignedModule_ReturnValue_1, UUI_Guntower_ProgressBar_ModuleIcon_C* K2Node_DynamicCast_AsUI_Guntower_Progress_Bar_Module_Icon, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetModuleID_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_1, UWidget* CallFunc_GetChildAt_ReturnValue_1, UUI_Guntower_ProgressBar_ModuleIcon_C* K2Node_DynamicCast_AsUI_Guntower_Progress_Bar_Module_Icon_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_2);
}

#endif
