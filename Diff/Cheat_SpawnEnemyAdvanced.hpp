#ifndef UE4SS_SDK_Cheat_SpawnEnemyAdvanced_HPP
#define UE4SS_SDK_Cheat_SpawnEnemyAdvanced_HPP

class UCheat_SpawnEnemyAdvanced_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USpinBox* AdvAmountSel;
    class USpinBox* BasAmountSel;
    class UButton* Button_Close;
    class UButton* Button_SpawnAll;
    class UListView* ListView_Mactera;
    class UListView* ListView_Specials;
    class UListView* ListView_SpiderAdv;
    class UListView* ListView_SpiderBasic;
    class USpinBox* MacAmountSel;
    class USpinBox* SpecAmountSel;
    FCheat_SpawnEnemyAdvanced_COn close requested On close requested;
    void On close requested();

    void Build Adv Spider list();
    void Build Basic Spider list();
    void Build Specials List();
    void Build Mactera List();
    void Construct();
    void BndEvt__Button_Close_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_SpawnAll_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void Spawn From Listview(const class UListView* Selected descriptors, const int32 Amount);
    void BndEvt__ListView_Mactera_K2Node_ComponentBoundEvent_8_SimpleListItemEventDynamic__DelegateSignature(class UObject* Item);
    void BndEvt__ListView_Specials_K2Node_ComponentBoundEvent_11_SimpleListItemEventDynamic__DelegateSignature(class UObject* Item);
    void BndEvt__ListView_SpiderAdv_K2Node_ComponentBoundEvent_12_SimpleListItemEventDynamic__DelegateSignature(class UObject* Item);
    void BndEvt__ListView_SpiderBasic_K2Node_ComponentBoundEvent_13_SimpleListItemEventDynamic__DelegateSignature(class UObject* Item);
    void ExecuteUbergraph_Cheat_SpawnEnemyAdvanced(int32 EntryPoint);
    void On close requested__DelegateSignature();
};

#endif
