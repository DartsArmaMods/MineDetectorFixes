#define SIMPLE_PATCH(className,baseClass,itemInfoBaseClass) \
    class className: baseClass { \
        type = TYPE_ITEM; \
        simulation = "Weapon"; \
        detectRange = 0; \
        ace_asItem = 1; \
        class ItemInfo: itemInfoBaseClass { \
            type = TYPE_BIPOD; \
        }; \
    }

// Mods tend to use either InventoryWeapon_Base_F or InventoryItem_Base_F for a base class for ItemInfo.
// InventoryWeapon_Base_F seemed to be more common for the mods I tested.
#define SIMPLE_PATCH_VANILLA(className) SIMPLE_PATCH(className,ItemCore,InventoryWeapon_Base_F)