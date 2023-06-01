#ifndef UE4SS_SDK_HUD_ObjectiveBox_Item_HPP
#define UE4SS_SDK_HUD_ObjectiveBox_Item_HPP

class UHUD_ObjectiveBox_Item_C : public UObjectiveWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Checkbox_Border;
    class UImage* CheckMark;
    class UImage* ICON_Counter;
    class UHUD_DefaultLabel_C* TEXT_ObjectiveCounter;
    class UHUD_DefaultLabel_C* TEXT_ObjectiveDesc;
    class UObjective* Objective;
    bool Primary;

    void PreConstruct(bool IsDesignTime);
    void ReceiveObjectiveInitialized();
    void ReceiveObjectiveUpdated();
    void ExecuteUbergraph_HUD_ObjectiveBox_Item(int32 EntryPoint);
};

#endif
