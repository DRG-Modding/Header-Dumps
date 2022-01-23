#ifndef UE4SS_SDK_Cheat_SpawnBosco_HPP
#define UE4SS_SDK_Cheat_SpawnBosco_HPP

class UCheat_SpawnBosco_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UButton* Button_0;
    class UTextBlock* TextBlock;
    FCheat_SpawnBosco_CBosco spawn requested Bosco spawn requested;
    void Bosco spawn requested();

    void Construct();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature();
    void OnBoscoChanged_Event(class ABosco* Bosco);
    void ExecuteUbergraph_Cheat_SpawnBosco(int32 EntryPoint, bool Temp_bool_Variable, FExecuteUbergraph_Cheat_SpawnBoscoK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FText Temp_text_Variable, FText Temp_text_Variable_1, class UFSDCheatManager* CallFunc_GetCheatManager_ReturnValue, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, class ABosco* K2Node_CustomEvent_Bosco, bool CallFunc_IsValid_ReturnValue, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, FText K2Node_Select_Default);
    void Bosco spawn requested__DelegateSignature();
};

#endif
