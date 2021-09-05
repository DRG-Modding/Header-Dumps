// WidgetBlueprintGeneratedClass UI_CoreInfuser_Rewards_Animator.UI_CoreInfuser_Rewards_Animator_C
// Size: 0x270 (Inherited: 0x230)
struct UUI_CoreInfuser_Rewards_Animator_C : UUserWidget {
	UWidgetAnimation* AnimOpen; // 0x230(0x08)
	UNamedSlot* CenterSlot; // 0x238(0x08)
	UNamedSlot* LeftSlot; // 0x240(0x08)
	UNamedSlot* RewardSlot; // 0x248(0x08)
	UNamedSlot* RightSlot; // 0x250(0x08)
	bool IsOpen; // 0x258(0x01)
	FMulticastInlineDelegate OnOpenChanged; // 0x260(0x10)

	void ShowAsReward(bool IsReward);
	void GetIsOpen(bool IsOpen);
	void SetOpen(bool InIsOpen);
	void OnOpenChanged__DelegateSignature(bool Open);
};

