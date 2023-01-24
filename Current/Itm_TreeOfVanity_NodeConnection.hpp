#ifndef UE4SS_SDK_Itm_TreeOfVanity_NodeConnection_HPP
#define UE4SS_SDK_Itm_TreeOfVanity_NodeConnection_HPP

class UItm_TreeOfVanity_NodeConnection_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* TurnOpaque;
    class UImage* Image_Line;
    class UTreeOfVanityItemWidget* Node1;
    class UTreeOfVanityItemWidget* Node2;
    bool BothBought;
    bool OneBought;

    void Construct();
    void NodeUpdated();
    void UpdateFullyConnectedNode();
    void ExecuteUbergraph_Itm_TreeOfVanity_NodeConnection(int32 EntryPoint);
};

#endif
