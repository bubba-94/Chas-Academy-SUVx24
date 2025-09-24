# Understanding Azure

## Learning Target 

* Explain what Azure is with your own words and familiarize yourself with central concepts like (subscription, region, resource, VM, storage and network)
* Translate technical language to everyday language and construct a consistent workshop.
* Understand IAM-foundations (indentity, rolls, RBAC, resourcesgroups) and the principle **least possible availability**
* Create a resourcegroup and provide access (as Contributor) also apply the terms in a simple webapp-scenario

## Workshop Assignments

### Table to translate technical language to everyday language

|**Terms**|**Simplified language**|**Example/metaphore**|
|-----------|--------|--------------|
|**Storage blob**| My storagespace on Azure for files and pictures | "A virtual harddrive" |
|**Resoure**| Whatever you rentis a resource, for ex. server, storage, VMs etc. | "Item on a receipt" |
|**Managed Identity**| Connection to another identities management | "Identity cloud" |
|**MFA**| Verify your identity in multiple steps | "BankID" | 

#### Everyday Examples

* **Storage blob/virtual harddrive** is a location where to can store files or shared collection of files in another way. We know that the storage exits, but not where it exists.
* **"Item on a recipt"** we get in exhange for a service or resource that we have rented. The recipt in this case is the collection of all resources on a server.
* **Social security** numbers is nto handled by private persons but can be used to identify a person.
* **BankID** is connected to a unit and identity that is registered and can be used to ensure an identity.

_____

### Build a webapp

|**Azure-world**|**Metaphores**|**Our motivation**|
|-----------|--------|--------------|
|**Subscription**|Rental|A subscription can be an aggrement and be renewed upon the terms provided in the aggrement, so that you know when a subscription ends|
|**Region**|City|Customers does not want to travel far to access the a store the same way network traffix has to be fast and reliable|
|**Virtual machine(VM)**|Workbench|The toolshed decides what tools you have access to the same way an OS does|
|**Storage blob**|Storage unit|The storage unit stores tools,projects and other important stuff the same way storage blobs save files and pictures that are needed via fast access|
|**Virtual networks(VNet)**|Inner walls/doors|Decides how the workshop is formed to take on different assignment. VNet creates a network where traffic can locate through containers for example|
