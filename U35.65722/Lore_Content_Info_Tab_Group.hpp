#ifndef UE4SS_SDK_Lore_Content_Info_Tab_Group_HPP
#define UE4SS_SDK_Lore_Content_Info_Tab_Group_HPP

class ULore_Content_Info_Tab_Group_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class ULore_Content_Info_Tab_W_Icon_C* Lore_InfoBox;
    class ULore_Content_Info_Tab_W_Icon_C* Main_InfoBox;

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_Lore_Content_Info_Tab_Group(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

#endif
