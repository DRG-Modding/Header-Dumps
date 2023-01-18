#ifndef UE4SS_SDK_Cheat_SpawnBeers_HPP
#define UE4SS_SDK_Cheat_SpawnBeers_HPP

class UCheat_SpawnBeers_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UButton* Button_0;
    class UComboBoxString* ComboBoxString_0;
    class UDrinkSettings* DrinkSettings;
    class ADrinkableActor* CurrentDrink;

    void OnRep_CurrentDrink();
    void OnLoaded_92546AE04DDDB88AD67C3094C2B92E45(UClass* Loaded);
    void Construct();
    void BndEvt__Cheat_SpawnBeers_Button_0_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_Cheat_SpawnBeers(int32 EntryPoint);
};

#endif
