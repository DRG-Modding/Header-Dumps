#ifndef UE4SS_SDK_Cheat_SpawnGems_HPP
#define UE4SS_SDK_Cheat_SpawnGems_HPP

class UCheat_SpawnGems_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UButton* Button_0;
    class UComboBoxString* ComboBoxString_0;
    TArray<class UGemResourceData*> Gems;

    void OnRep_CurrentDrink();
    void OnLoaded_BE285B9A4EF0300DE4DE55BE5B655D0B(UClass* Loaded);
    void Construct();
    void BndEvt__Cheat_SpawnBeers_Button_0_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_Cheat_SpawnGems(int32 EntryPoint);
};

#endif
