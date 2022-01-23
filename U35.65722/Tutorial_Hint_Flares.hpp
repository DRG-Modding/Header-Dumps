#ifndef UE4SS_SDK_Tutorial_Hint_Flares_HPP
#define UE4SS_SDK_Tutorial_Hint_Flares_HPP

class UTutorial_Hint_Flares_C : public UTutorialHintComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    float FirstTimeDelay;
    float AfterUseDelay;

    void OnFlareThrown();
    void ReceiveOnHidden();
    void ReceiveOnInitialized();
    void ExecuteUbergraph_Tutorial_Hint_Flares(int32 EntryPoint, bool Temp_bool_Variable, FExecuteUbergraph_Tutorial_Hint_FlaresK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, bool CallFunc_HasTutorialBeenShown_ReturnValue, float K2Node_Select_Default);
};

#endif
