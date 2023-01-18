#ifndef UE4SS_SDK_Cheat_SpawnEnemy_HPP
#define UE4SS_SDK_Cheat_SpawnEnemy_HPP

class UCheat_SpawnEnemy_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UButton* Button_0;
    class UComboBoxString* ComboBoxString_0;
    class USpinBox* EnemyCountBox;
    TArray<class UEnemyDescriptor*> Enemies;
    EEnemyDescriptorCheatClass Cheat Class;

    void Construct();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_23_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_Cheat_SpawnEnemy(int32 EntryPoint);
};

#endif
