#ifndef UE4SS_SDK_Itm_Season_HoldToClaim_HPP
#define UE4SS_SDK_Itm_Season_HoldToClaim_HPP

class UItm_Season_HoldToClaim_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_Itm_Season_HoldToClaim(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

#endif
