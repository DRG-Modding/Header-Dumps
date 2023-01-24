#ifndef UE4SS_SDK_WND_TreeOfVanity_HPP
#define UE4SS_SDK_WND_TreeOfVanity_HPP

class UWND_TreeOfVanity_C : public UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCanvasPanel* Canvas_Connections;
    class UCanvasPanel* CanvasPanel_Nodes;
    class UImage* I_StartLine_1;
    class UImage* I_StartPoint;
    class UImage* I_StartPointOutline;
    class UITM_TreeOfVanity_Node_C* ITM_TreeOfVanity_Node;
    class UITM_TreeOfVanity_Node_C* ITM_TreeOfVanity_Node_1;
    class UITM_TreeOfVanity_Node_C* ITM_TreeOfVanity_Node_2;
    class UITM_TreeOfVanity_Node_C* ITM_TreeOfVanity_Node_3;
    class UITM_TreeOfVanity_Node_C* ITM_TreeOfVanity_Node_4;
    class UITM_TreeOfVanity_Node_C* ITM_TreeOfVanity_Node_5;
    class UITM_TreeOfVanity_Node_C* ITM_TreeOfVanity_Node_6;
    class UITM_TreeOfVanity_Node_C* ITM_TreeOfVanity_Node_7;
    class UITM_TreeOfVanity_Node_C* ITM_TreeOfVanity_Node_8;
    class UITM_TreeOfVanity_Node_C* ITM_TreeOfVanity_Node_9;
    class UITM_TreeOfVanity_Node_C* ITM_TreeOfVanity_Node_10;
    class UITM_TreeOfVanity_Node_C* ITM_TreeOfVanity_Node_11;
    class UITM_TreeOfVanity_Node_C* ITM_TreeOfVanity_Node_12;
    class UITM_TreeOfVanity_Node_C* ITM_TreeOfVanity_Node_13;
    class UITM_TreeOfVanity_Node_C* ITM_TreeOfVanity_Node_14;
    class UITM_TreeOfVanity_Node_C* ITM_TreeOfVanity_Node_15;
    float SnapSize;
    class UTreeOfVanity* TreeTestRef;
    FWND_TreeOfVanity_CClickedWithoutTokens ClickedWithoutTokens;
    void ClickedWithoutTokens();
    int32 tempIdx;
    FVector2D CanvasSize;
    TArray<class UItm_TreeOfVanity_NodeConnection_C*> NodeConnectionMap;
    bool NodeBoughtFlowActive;
    class UITM_TreeOfVanity_Node_C* TempNode;

    bool IsStartingNodeBought();
    void RefreshConnections();
    void AddNode(FVanityNode VanNode, class UITM_TreeOfVanity_Node_C*& Node);
    void LoadTreeOfVanity(class UTreeOfVanity* TreeOfVanity);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void NodeClicked(class UITM_TreeOfVanity_Node_C* InNode);
    void OnWindowClosed_Event_0(class UWindowWidget* Window);
    void ExecuteUbergraph_WND_TreeOfVanity(int32 EntryPoint);
    void ClickedWithoutTokens__DelegateSignature();
};

#endif
